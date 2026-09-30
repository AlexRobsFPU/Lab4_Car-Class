#include "Car.hpp"

#include <iostream>

int main(void) {
    // Create toyota object
    Car toyota;

    toyota.setMake("Toyota");
    toyota.setModel("Corolla");
    toyota.setYear(2020);
    toyota.setMPG(23.2);
    toyota.setFuellevel(12);

    toyota.printInfo();
    
    
    toyota.refuel(5);

    while (toyota.getFuelLevel() > 0) {
        double g, d;
        std::cout << "Enter gallons: ";
        std::cin >> g;
        std::cout << "Enter distance: ";
        std::cin >> d;

        toyota.refuel(g);
        toyota.drive(d);
        toyota.printInfo();
    }

    return 0;
}
