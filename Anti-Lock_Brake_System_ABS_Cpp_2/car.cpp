#include "car.h"

// Constructor
Car::Car()
{
    carWeight = 1000;
    customerWeight = 0;
    totalWeight = carWeight + customerWeight;
}

// Setter function: car weight, customer weight, car speed
void Car::setCarWeight(double car_weight)
{
    carWeight = car_weight;
    totalWeight = carWeight + customerWeight;
}

void Car::addCustomer(double customer_weight)
{
    customerWeight += customer_weight;
    totalWeight = carWeight + customerWeight;
}

void Car::setSpeed(int speed)
{
    carWheel.setSpeed(speed);  // Nêu dùng cấp phát động hay tĩnh? 
    //carWheel.setSpeed(speed);
}


// Getter function: total weight, car speed
double Car::getCarWeight()
{
    return carWeight;
}

double Car::getTotalWeight()
{
    return totalWeight;
}

int Car::getSpeed()
{
    return carWheel.getSpeed();
}