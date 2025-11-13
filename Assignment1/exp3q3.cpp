// Program 3(c): Demonstrate Nested Class
// Outer Class: College, Inner Class: Department

#include <iostream>
#include <string>
using namespace std;

class College {
    string collegeName;

public:
    College(string name) : collegeName(name) {}

    class Department { // nested class
        string deptName;

    public:
        Department(string name) : deptName(name) {}
        void showDept() const {
            cout << "Department: " << deptName << endl;
        }
    };

    void showCollege() const {
        cout << "College: " << collegeName << endl;
    }
};

int main() {
    College c("MIT-WPU");
    c.showCollege();

    College::Department d("Computer Science");
    d.showDept();

    return 0;
}
