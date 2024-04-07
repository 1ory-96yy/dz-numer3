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

    Lift highestLift = lift1.compareLift(lift2);
    std::cout << "The highest lift is on floor: " << highestLift.getCurrentFloor() << std::endl;

    Lift nearest = lift1.nearestLift(3, lift2);
    std::cout << "The nearest lift to floor 3 is on floor: " << nearest.getCurrentFloor() << std::endl;

    return 0;
}
