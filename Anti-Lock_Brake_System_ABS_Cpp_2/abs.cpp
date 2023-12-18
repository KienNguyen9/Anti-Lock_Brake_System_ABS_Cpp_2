#include "abs.h"
#include <cassert>

ABS::ABS(Car* car)
{
    ABS_Car = car;
}

bool ABS::isSpeedWheelUnderLimit()
{
    return ((*ABS_Car).getSpeed() < WHEEL_LIMIT_SPEED); // Lưu ý
}

void ABS::brake()
{
    //assert(!isSpeedWheelUnderLimit() && "Wheel are in danger of locking up");
    if (isSpeedWheelUnderLimit() == true)
    {
        std::cout << "!!!DANGER!!!\nWheels are danger of locking up!\n";
    }
}



