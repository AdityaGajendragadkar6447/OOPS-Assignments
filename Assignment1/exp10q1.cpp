// Program 10(a): Demonstrate Function Template
#include <iostream>
using namespace std;

// Function Template to find maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;
    cout << "Max of 5.7 and 3.4: " << findMax(5.7, 3.4) << endl;
    cout << "Max of 'A' and 'Z': " << findMax('A', 'Z') << endl;
    return 0;
}
