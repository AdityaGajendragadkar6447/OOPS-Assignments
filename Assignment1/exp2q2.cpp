// Program 2(b): Demonstrate array of objects
// Class: Account - Add interest if balance > 5000

#include <iostream>
#include <string>
using namespace std;

class Account {
    int accNo;
    double balance;

public:
    void accept() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void addInterest() {
        if (balance > 5000)
            balance += balance * 0.10; // add 10% interest
    }

    void display() const {
        cout << "Account No: " << accNo
             << " | Balance: " << balance << endl;
    }
};

int main() {
    const int SIZE = 10;
    Account acc[SIZE];

    cout << "--- Enter data for 10 accounts ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        acc[i].accept();
        acc[i].addInterest();
    }

    cout << "\n--- Updated Account Details ---\n";
    for (int i = 0; i < SIZE; i++)
        acc[i].display();

    return 0;
}
