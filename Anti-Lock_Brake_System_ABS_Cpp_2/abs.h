#ifndef ABS_H
#define ABS_H

#include "car.h"

class ABS
{
private:
    Car* ABS_Car; // Không cần "= new Car" vì chưa khởi tạo đối tượng   

public:
    // Constructor 
    ABS(Car* car);
    bool isSpeedWheelUnderLimit();
    void brake();
    int getSpeed();
};
#endif