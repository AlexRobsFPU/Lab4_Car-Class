#include "Car.hpp"
#include <iostream>
#include <string>

void Car::printInfo() const 
{
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Fuel: " << getFuel_Level() << std::endl;
    std::cout << "Miles: " << millage << std::endl;
}

int getFuelLevel()
{
    return fuel_level;
}

void setFuelLevel(double gallons)
{
    if(getFuel_Level + gallons >= fuel_capacity)
    {
        fuel_level = fuel_capacity;
    }
    else
    {
        fuel_level += gallons;
    }
}

void Car::refuel(double gallons)
{
    std::cout << "Refueling...\n";
    std::cout << "Fuel added: " << gallons << " gallons\n";
    setFuelLevel(gallons);
    std::cout << "Fuel Level: " << fuel_level << " gallons\n";
}

void Car::drive(double distance)
{
    while(fuel_level > 0 || distance > 0)
    {
        distance -= mpg;
        setFuelLevel(fuel_level - 1);
    }
}