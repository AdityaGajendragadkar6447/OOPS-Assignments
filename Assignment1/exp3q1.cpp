// Program 3(a): Demonstrate Pointer to Object
// Class: Book - Access members using pointer to object

#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    float price;

public:
    void accept() {
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() const {
        cout << "\nBook Title: " << title
             << "\nAuthor: " << author
             << "\nPrice: " << price << endl;
    }
};

int main() {
    Book b1;
    Book *ptr = &b1; // pointer to object

    cout << "--- Enter Book Details ---\n";
    ptr->accept();

    cout << "\n--- Book Details ---\n";
    ptr->display();

    return 0;
}
