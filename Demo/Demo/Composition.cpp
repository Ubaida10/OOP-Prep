#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine is starting...\n" ;
    }
};

class Car {
    Engine engine; // Composition: Car owns Engine

public:
    void startCar() {
        engine.start(); // Car starts its engine
        cout << "Car is ready to drive!\n" ;
    }
};

int main() {
    Car car;
    car.startCar(); // Engine's lifecycle is tied to Car
    return 0;
}