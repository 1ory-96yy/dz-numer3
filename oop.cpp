#include "oop.h"
#include <iostream>

int Lift::numInstances = 0;

Lift::Lift(int lower, int upper) : lowerFloor(lower), upperFloor(upper), currentFloor(lower), isWorking(false) {
    numInstances++;
}

Lift::Lift(const Lift& other) : lowerFloor(other.lowerFloor), upperFloor(other.upperFloor), currentFloor(other.currentFloor), isWorking(other.isWorking) {
    numInstances++;
}

Lift::~Lift() {
    numInstances--;
}

void Lift::turnOn() {
    isWorking = true;
}

void Lift::turnOff() {
    isWorking = false;
}

bool Lift::isWorkingNow() const {
    return isWorking;
}

int Lift::getCurrentFloor() const {
    return currentFloor;
}

void Lift::call(int floor) {
    if (floor < lowerFloor || floor > upperFloor) {
        std::cerr << "Requested floor is out of range" << std::endl;
        return;
    }

    if (!isWorking) {
        std::cerr << "Lift is not operational" << std::endl;
        return;
    }

    std::cout << "Lift called to floor " << floor << std::endl;
    currentFloor = floor;
}

int Lift::getNumInstances() {
    return numInstances;
}

Lift Lift::compareLift(const Lift& other) const {
    return (currentFloor > other.currentFloor) ? *this : other;
}

Lift Lift::nearestLift(int floor, const Lift& other) const {
    int distance_to_this = (currentFloor > floor) ? (currentFloor - floor) : (floor - currentFloor);
    int distance_to_other = (other.currentFloor > floor) ? (other.currentFloor - floor) : (floor - other.currentFloor);

    return (distance_to_this < distance_to_other) ? *this : other;
}
