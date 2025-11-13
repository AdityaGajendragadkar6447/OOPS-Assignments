// Program 4(c): Demonstrate swapping data between objects using friend function

#include <iostream>
using namespace std;

class Sample {
    int num;

public:
    void accept() {
        cout << "Enter number: ";
        cin >> num;
    }

    void display() const {
        cout << "Number: " << num << endl;
    }

    friend void swapData(Sample &, Sample &);
};

void swapData(Sample &a, Sample &b) {
    int temp = a.num;
    a.num = b.num;
    b.num = temp;
}

int main() {
    Sample s1, s2;
    cout << "Enter details for Object 1:\n";
    s1.accept();
    cout << "\nEnter details for Object 2:\n";
    s2.accept();

    cout << "\nBefore Swapping:\n";
    s1.display();
    s2.display();

    swapData(s1, s2);

    cout << "\nAfter Swapping:\n";
    s1.display();
    s2.display();

    return 0;
}
