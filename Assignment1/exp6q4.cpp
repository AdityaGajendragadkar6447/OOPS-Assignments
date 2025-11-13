// Program 6(d): Demonstrate Hybrid Inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;

public:
    void getName() {
        cout << "Enter name: ";
        getline(cin, name);
    }
};

class Marks : virtual public Student {
protected:
    int sub1, sub2;

public:
    void getMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> sub1 >> sub2;
    }
};

class Sports : virtual public Student {
protected:
    int score;

public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Marks, public Sports {
public:
    void display() {
        int total = sub1 + sub2 + score;
        cout << "\nStudent: " << name
             << "\nAcademic + Sports Total = " << total << endl;
    }
};

int main() {
    Result r;
    r.getName();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
