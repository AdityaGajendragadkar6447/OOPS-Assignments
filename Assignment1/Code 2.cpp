#include <iostream>
using namespace std;

class Book {
    string name;
    float price;
    int pages;
public:
    void accept() {
        cout << "Enter Book Name, Price, Pages: ";
        cin >> name >> price >> pages;
    }
    float getPrice() { return price; }
    string getName() { return name; }
};

int main() {
    Book b1, b2;
    b1.accept();
    b2.accept();
    if (b1.getPrice() > b2.getPrice())
        cout << b1.getName() << " has higher price\n";
    else
        cout << b2.getName() << " has higher price\n";
    return 0;
}
