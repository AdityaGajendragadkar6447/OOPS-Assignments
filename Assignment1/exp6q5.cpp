// Program 6(e): Demonstrate Virtual Base Class
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;

public:
    void getStudent() {
        cout << "Enter name: ";
        getline(cin, name);
    }
};

class Test : virtual public Student {
protected:
    int marks;

public:
    void getMarks() {
        cout << "Enter test marks: ";
        cin >> marks;
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

class Result : public Test, public Sports {
public:
    void display() {
        cout << "\nName: " << name;
        cout << "\nTotal (Test + Sports): " << (marks + score) << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
