#include <iostream>
using namespace std;

class Account {
protected:
    string owner;
    double balance;
public:
    Account(string o, double b) : owner(o), balance(b) {}
    virtual void deposit(double amt) { balance += amt; }
    virtual void withdraw(double amt) { balance -= amt; }
    virtual void display() { cout << owner << " Balance: " << balance << endl; }
};

class Savings : public Account {
public:
    Savings(string o, double b) : Account(o, b) {}
    void withdraw(double amt) override {
        if(balance - amt < 1000) cout << "❌ Minimum balance required!\n";
        else balance -= amt;
    }
};

int main() {
    Savings s("Prachi", 5000);
    s.display();
    s.deposit(2000);
    s.withdraw(3000);
    s.display();
    return 0;
}
