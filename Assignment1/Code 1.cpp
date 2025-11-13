#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name, cls;
public:
    void accept() {
        cout << "Enter Roll No, Name, Class: ";
        cin >> roll_no >> name >> cls;
    }
    void display() {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", Class: " << cls << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
