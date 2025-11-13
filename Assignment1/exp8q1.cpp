// Program 8(a): Demonstrate Binary Operator Overloading
// Overload '+' operator to concatenate two strings

#include <iostream>
#include <string>
using namespace std;

class String {
    string str;

public:
    String() {}
    String(string s) : str(s) {}

    // Overload + operator
    String operator+(const String &obj) const {
        return String(str + " " + obj.str); // concatenate with space
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello"), s2("World"), s3;

    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();

    s3 = s1 + s2; // use overloaded +
    cout << "\nConcatenated String: ";
    s3.display();

    return 0;
}
