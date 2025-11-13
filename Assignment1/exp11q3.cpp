// Program 11(c): Demonstrate STL Set
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        numbers.insert(n); // duplicates ignored
    }

    cout << "\nSet elements (unique & sorted): ";
    for (int n : numbers)
        cout << n << " ";

    // Erase one element
    int del;
    cout << "\nEnter element to delete: ";
    cin >> del;

    numbers.erase(del);

    cout << "Set after deletion: ";
    for (int n : numbers)
        cout << n << " ";

    cout << endl;
    return 0;
}
