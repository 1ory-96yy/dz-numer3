#ifndef LIFT_H
#define LIFT_H

class Lift {
private:
    int lowerFloor;
    int upperFloor;
    int currentFloor;
    bool isWorking;
    static int numInstances;

public:
    Lift(int lower, int upper);
    Lift(const Lift& other); 
    ~Lift();
    void turnOn();
    void turnOff();
    bool isWorkingNow() const;
    int getCurrentFloor() const;
    void call(int floor);
    static int getNumInstances();
    Lift compareLift(const Lift& other) const; 
    Lift nearestLift(int floor, const Lift& other) const;
};

#endif
