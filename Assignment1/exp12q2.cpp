// Program 12(b): Demonstrate Manipulators (setw, setprecision, etc.)
#include <iostream>
#include <iomanip> // for manipulators
using namespace std;

int main() {
    float a = 12.34567, b = 45.6789;

    cout << "Without manipulators:\n";
    cout << a << "\t" << b << endl;

    cout << "\nUsing setw(10) and setprecision(3):\n";
    cout << setw(10) << fixed << setprecision(3) << a
         << setw(10) << fixed << setprecision(3) << b << endl;

    cout << "\nUsing left and right alignment:\n";
    cout << left << setw(10) << a << right << setw(10) << b << endl;

    return 0;
}
