#include "mainwindow.h"

#include "cmd_publisher.h"
#include "subscriber.h"
#include "map_subscriber.h"
#include "map_service_client.h"

#include <QtWidgets/QApplication>
#include <QObject>

#include <QScreen>

std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor = nullptr;
std::thread executor_thread;

int main(int argc, char *argv[])
{
    setvbuf(stdout, nullptr, _IONBF, BUFSIZ); // stdout IO NO buffer
    rclcpp::init(argc, argv);

    std::shared_ptr<Publisher> cmd_publisher = nullptr;
    std::shared_ptr<Subscriber> subscriber = nullptr;
    std::shared_ptr<MapServiceClient> service_client = nullptr;

    executor = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();

    cmd_publisher = std::make_shared<Publisher>("cmd_vel_from_qt");

    subscriber = std::make_shared<Subscriber>("chatter"); // to delete

    service_client = std::make_shared<MapServiceClient>("which_maps");

    auto map_subscriber = std::make_shared<MapSubscriber>();
    //MapViewer mapViewer;

    executor->add_node(cmd_publisher);
    executor->add_node(subscriber);
    executor->add_node(map_subscriber);
    executor->add_node(service_client);
    
    executor_thread = std::thread([executor]() { executor->spin(); });
    //std::thread executor_thread([executor](){executor->spin();});

    // QT APPLICATION //
    QApplication a(argc, argv);
    a.setStyleSheet(
        "QPushButton {"
        "    border: 3px solid #8f8f91;"
        "    border-radius: 25px;" // Make buttons round
        "     font-weight: bold;"
        "}"
        "QLabel {"
        "    border-radius: 25px;" // Make buttons round
        "}"
    );

    MainWindow mainWindow;
    //mainWindow.resize(width, height);

    mainWindow.show();

    // to delete 
    // subscriber object ကနေ signal emit လုပ်ပြီး MainWindow object ရဲ့ slot ကို ဆက်သွယ်ထားတယ်။
    // subscriber က shared_ptr , အဲ့တာကိုမှ .get() နဲ့ raw pointer of မူလ Subscriber Object ကို ဆွဲထုတ်တာ။
    // logReceived က Subscriber ဆီက signal ပါ။
    // နောက် လက်ခံမဲ့ object ရယ်, သူ့ရဲ့ slot function ရယ်ပေါ့။
    QObject::connect(subscriber.get(), &Subscriber::logReceived, &mainWindow, &MainWindow::DisplaySubscription);

    // ဒါရဖို့ mainwindow ရဲ့ ui ကို unique_ptr ကနေ shared_ptr ပြောင်းပြီး pointer ကို .getUi() နဲ့ ရယူတယ်။
    QObject::connect(mainWindow.getUi()->btnForward, &QPushButton::clicked, cmd_publisher.get(), &Publisher::setForward);

    QObject::connect(mainWindow.getUi()->btnLeft, &QPushButton::clicked, cmd_publisher.get(), &Publisher::setLeft);

    QObject::connect(mainWindow.getUi()->btnRight, &QPushButton::clicked, cmd_publisher.get(), &Publisher::setRight);

    QObject::connect(mainWindow.getUi()->btnStop, &QPushButton::clicked, cmd_publisher.get(), &Publisher::setStop);

    QObject::connect(map_subscriber.get(), &MapSubscriber::updateMap, &mainWindow, &MainWindow::updateMap);

    //
    QObject::connect(mainWindow.getUi()->saveMapBtn, &QPushButton::clicked, service_client.get(), &MapServiceClient::callServiceSave);
    QObject::connect(mainWindow.getUi()->openMapBtn, &QPushButton::clicked, service_client.get(), &MapServiceClient::callServiceOpen);
    QObject::connect(mainWindow.getUi()->selectMapBtn, &QPushButton::clicked, service_client.get(), &MapServiceClient::callServiceSelect);

    return a.exec();
}

void shutdown_thread()
{
    // Stop the ROS executor thread safely
    if (executor) {
        executor->cancel(); // Signal the executor to stop
    }

    if (executor_thread.joinable()) {
        executor_thread.join(); // Wait for the thread to finish
    }

    rclcpp::shutdown();
}
