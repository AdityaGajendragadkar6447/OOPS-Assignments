// Program 7(b): Demonstrate Unary Operator Overloading
#include <iostream>
using namespace std;

class Number {
    int x, y;

public:
    void getData() {
        cout << "Enter values for x and y: ";
        cin >> x >> y;
    }

    void display() const {
        cout << "x = " << x << ", y = " << y << endl;
    }

    // Overload unary minus operator
    void operator-() {
        x = -x;
        y = -y;
    }
};

int main() {
    Number n;
    n.getData();

    cout << "\nBefore overloading:\n";
    n.display();

    -n; // apply unary minus

    cout << "\nAfter applying unary minus operator:\n";
    n.display();

    return 0;
}
