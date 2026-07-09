#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0; // pure virtual
};

class CreditCard : public Payment {
public:
    void pay() { cout << "Paid using Credit Card\n"; }
};

class UPI : public Payment {
public:
    void pay() { cout << "Paid using UPI\n"; }
};

int main() {
    Payment* p;
    CreditCard c;
    UPI u;
    p = &c; p->pay();
    p = &u; p->pay();
    return 0;
}
