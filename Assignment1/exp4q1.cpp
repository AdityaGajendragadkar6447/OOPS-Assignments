// Program 4(a): Demonstrate passing object as argument
// Class: Result - Compare total marks of two students

#include <iostream>
#include <string>
using namespace std;

class Result {
    string name;
    int marks[3]; // marks of 3 subjects

public:
    void accept() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }

    int total() const {
        int t = 0;
        for (int i = 0; i < 3; i++)
            t += marks[i];
        return t;
    }

    void compare(Result r2) {
        int t1 = total(), t2 = r2.total();
        cout << "\n" << name << " Total: " << t1;
        cout << "\n" << r2.name << " Total: " << t2 << endl;
        if (t1 > t2)
            cout << name << " scored higher.\n";
        else if (t2 > t1)
            cout << r2.name << " scored higher.\n";
        else
            cout << "Both have equal marks.\n";
    }
};

int main() {
    Result r1, r2;
    cout << "Enter details for Student 1:\n";
    r1.accept();
    cout << "\nEnter details for Student 2:\n";
    r2.accept();

    cout << "\n--- Comparison ---\n";
    r1.compare(r2);
    return 0;
}
