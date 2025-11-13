// Program 10(c): Demonstrate Exception Handling
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0)
            throw runtime_error("Division by zero not allowed!");

        float result = static_cast<float>(num1) / num2;
        cout << "Result = " << result << endl;
    }
    catch (const exception &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues normally..." << endl;
    return 0;
}
