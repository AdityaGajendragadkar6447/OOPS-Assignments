// Program 2(c): Demonstrate array of objects
// Class: Staff - Display staff members who are HOD

#include <iostream>
#include <string>
using namespace std;

class Staff {
    string name;
    string post;

public:
    void accept() {
        cout << "Enter staff name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter post: ";
        getline(cin, post);
    }

    bool isHOD() const { return (post == "HOD" || post == "hod" || post == "Hod"); }

    void display() const {
        cout << "Name: " << name << " | Post: " << post << endl;
    }
};

int main() {
    const int SIZE = 5;
    Staff staffList[SIZE];

    cout << "--- Enter data for 5 staff members ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nStaff " << i + 1 << ":\n";
        staffList[i].accept();
    }

    cout << "\n--- Staff Members who are HOD ---\n";
    for (int i = 0; i < SIZE; i++) {
        if (staffList[i].isHOD())
            staffList[i].display();
    }

    return 0;
}
