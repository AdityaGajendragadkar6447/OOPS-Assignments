// Program 12(a): Demonstrate Namespace in C++
#include <iostream>
using namespace std;

namespace College {
    string name = "MIT-WPU";

    void display() {
        cout << "Welcome to " << name << "!" << endl;
    }
}

namespace Department {
    string dept = "Computer Engineering";

    void display() {
        cout << "Department: " << dept << endl;
    }
}

int main() {
    College::display();
    Department::display();

    return 0;
}
