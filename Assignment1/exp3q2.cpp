// Program 3(b): Demonstrate 'this' pointer
// Class: Student - Return reference to current object using 'this'

#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student &setData(int r, string n) {
        this->roll = r;
        this->name = n;
        return *this; // returning current object reference
    }

    void display() const {
        cout << "Roll No: " << roll << " | Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(101, "Akansha").display(); // chaining using 'this'
    return 0;
}
