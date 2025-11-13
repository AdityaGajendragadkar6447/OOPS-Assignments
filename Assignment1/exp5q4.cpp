// Program 5(d): Demonstrate use of Constructor and Destructor
#include <iostream>
using namespace std;

class Demo {
    int id;

public:
    // Constructor
    Demo(int i) {
        id = i;
        cout << "Constructor called for object " << id << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for object " << id << endl;
    }
};

int main() {
    cout << "Creating object a...\n";
    Demo a(1);

    {
        cout << "\nCreating two more objects inside a block...\n";
        Demo b(2);
        Demo c(3);
        cout << "Exiting inner block...\n";
    } // destructors for b and c called here

    cout << "\nBack to main, exiting program...\n";
    return 0; // destructor for a called here
}
