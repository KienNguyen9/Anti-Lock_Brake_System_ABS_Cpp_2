#include "wheel.h"

Wheel::Wheel()
{
    Speed = 0;
}

int Wheel::getSpeed()
{
    return Speed;
}

void Wheel::setSpeed(int speed)
{
    Speed = speed;
}
