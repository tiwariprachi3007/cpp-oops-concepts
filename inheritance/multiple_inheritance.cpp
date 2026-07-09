#include <iostream>
using namespace std;

class Person {
public:
    void getDetails() { cout << "Person details\n"; }
};

class Learner {
public:
    void learn() { cout << "Learner is learning\n"; }
};

class Student : public Person, public Learner {
public:
    void study() { cout << "Student studying\n"; }
};

int main() {
    Student s;
    s.getDetails();
    s.learn();
    s.study();
    return 0;
}
