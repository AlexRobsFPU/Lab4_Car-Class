#include "Car.hpp"
#include <iostream>
#include <string>

void Car::printInfo() const 
{
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Fuel: " << Car::getFuel_Level() << std::endl;
    std::cout << "Miles: " << 
}

int getFuel_Level()
{

}

void Car::refuel(double gallons)
{

}

void Car::drive(double distance)
{

}