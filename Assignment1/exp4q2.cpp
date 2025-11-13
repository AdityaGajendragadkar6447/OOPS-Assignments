// Program 4(b): Demonstrate Friend Function
// Class: Complex - Compare sum of two complex numbers

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void accept() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex add(Complex, Complex); // friend declaration
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    cout << "Enter first complex number:\n";
    c1.accept();
    cout << "Enter second complex number:\n";
    c2.accept();

    c3 = add(c1, c2);

    cout << "\nSum = ";
    c3.display();

    return 0;
}
