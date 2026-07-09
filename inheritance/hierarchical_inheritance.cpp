#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() { cout << "Circle area = πr^2\n"; }
};

class Rectangle : public Shape {
public:
    void area() { cout << "Rectangle area = l*b\n"; }
};

int main() {
    Circle c;
    Rectangle r;
    c.area();
    r.area();
    return 0;
}
