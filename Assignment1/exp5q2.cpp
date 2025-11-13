// Program 5(b): Demonstrate use of constructors in Student class
#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
    }

    void display() const {
        cout << "Roll No: " << rollNo << " | Name: " << name << endl;
    }
};

int main() {
    Student s1;                    // Default
    Student s2(101, "Akansha");    // Parameterized
    Student s3 = s2;               // Copy

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
