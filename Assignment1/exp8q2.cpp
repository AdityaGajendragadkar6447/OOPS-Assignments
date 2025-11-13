// Program 8(b): Demonstrate Runtime Polymorphism using Virtual Function
#include <iostream>
using namespace std;

class Account {
public:
    virtual void display() { // virtual function
        cout << "Generic Account" << endl;
    }
};

class Savings : public Account {
public:
    void display() override {
        cout << "Savings Account - Interest rate: 7%" << endl;
    }
};

class Current : public Account {
public:
    void display() override {
        cout << "Current Account - No interest" << endl;
    }
};

int main() {
    Account *accPtr; // base class pointer
    Savings s;
    Current c;

    accPtr = &s;
    cout << "Calling through base pointer:\n";
    accPtr->display(); // calls Savings::display()

    accPtr = &c;
    accPtr->display(); // calls Current::display()

    return 0;
}
