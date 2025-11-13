// Program 10(b): Demonstrate Class Template
#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << num1 << ", " << num2 << endl;
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }
};

int main() {
    cout << "--- Integer Calculator ---" << endl;
    Calculator<int> intCalc(20, 5);
    intCalc.displayResult();

    cout << "\n--- Float Calculator ---" << endl;
    Calculator<float> floatCalc(10.5, 2.5);
    floatCalc.displayResult();

    return 0;
}
