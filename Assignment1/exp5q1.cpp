// Program 5(a): Demonstrate Default, Parameterized, and Copy Constructors
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Default Constructor
    Number() {
        value = 0;
        cout << "Default constructor called.\n";
    }

    // Parameterized Constructor
    Number(int v) {
        value = v;
        cout << "Parameterized constructor called.\n";
    }

    // Copy Constructor
    Number(const Number &n) {
        value = n.value;
        cout << "Copy constructor called.\n";
    }

    void display() const {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1;          // Default constructor
    Number n2(10);      // Parameterized constructor
    Number n3 = n2;     // Copy constructor

    cout << "\n--- Display Values ---\n";
    n1.display();
    n2.display();
    n3.display();

    return 0;
}
