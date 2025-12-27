#include "system_controller.h"
#include <iostream>

SystemController::SystemController(double maxTemp) : maxTemperature(maxTemp) {}

void SystemController::checkTemperature(double temp) {
    if (temp > maxTemperature) {
        triggerAlarm();
    } else {
        std::cout << "Temperature OK: " << temp << " C" << std::endl;
    }
}

void SystemController::triggerAlarm() {
    std::cout << "ALARM! Temperature exceeded!" << std::endl;
}
