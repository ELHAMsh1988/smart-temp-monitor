#include "temperature_sensor.h"
#include <cstdlib>
#include <ctime>

TemperatureSensor::TemperatureSensor() {
    srand(time(0));
}

double TemperatureSensor::readTemperature() {
    return 20 + (rand() % 2000) / 100.0;
}
