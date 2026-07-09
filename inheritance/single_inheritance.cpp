#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle started\n"; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car is driving\n"; }
};

int main() {
    Car c;
    c.start();
    c.drive();
    return 0;
}
