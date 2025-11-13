// Program 1(a): Demonstrate use of class and object
// Class: Student
#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll_no;
    string name;
    string class_name;

public:
    void acceptData() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Class: ";
        getline(cin, class_name);
    }

    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll No: " << roll_no << endl;
        cout << "Name   : " << name << endl;
        cout << "Class  : " << class_name << endl;
    }
};

int main() {
    Student s1;
    s1.acceptData();
    s1.displayData();
    return 0;
}
