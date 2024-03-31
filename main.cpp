#include "oop.h"
#include <iostream>

int main() {
    Lift lift1(1, 10);
    Lift lift2(-2, 8);

    lift1.turnOn();
    lift2.turnOn();

    std::cout << "Number of lift instances: " << Lift::getNumInstances() << std::endl;

    lift1.call(5);
    lift2.call(7);

    std::cout << "Lift 1 is currently on floor: " << lift1.getCurrentFloor() << std::endl;
    std::cout << "Lift 2 is currently on floor: " << lift2.getCurrentFloor() << std::endl;

    return 0;
}
