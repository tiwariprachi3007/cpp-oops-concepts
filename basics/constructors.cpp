#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle() { length = 0; breadth = 0; } // default
    Rectangle(int l, int b) { length = l; breadth = b; } // parameterized
    int area() { return length * breadth; }
};

int main() {
    Rectangle r1;
    Rectangle r2(10, 5);
    cout << "Default area: " << r1.area() << endl;
    cout << "Parameterized area: " << r2.area() << endl;
    return 0;
}
