// Program 7(a): Demonstrate Function Overloading
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;

    cout << "Sum of two integers: " << m.add(5, 10) << endl;
    cout << "Sum of two floats: " << m.add(2.5f, 3.7f) << endl;
    cout << "Sum of three integers: " << m.add(1, 2, 3) << endl;

    return 0;
}
