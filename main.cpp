#include "temperature_sensor.h"
#include "system_controller.h"
#include <thread>
#include <chrono>

int main() {
    TemperatureSensor sensor;
    SystemController controller(30.0);

    while (true) {
        double temp = sensor.readTemperature();
        controller.checkTemperature(temp);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}
