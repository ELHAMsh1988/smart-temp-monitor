#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H

class SystemController {
public:
    SystemController(double maxTemp);
    void checkTemperature(double temp);

private:
    double maxTemperature;
    void triggerAlarm();
};

#endif
