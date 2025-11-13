// Program 5(c): Demonstrate Constructors for College Class
#include <iostream>
#include <string>
using namespace std;

class College {
    string name;
    string city;
    int established;

public:
    // Default Constructor
    College() {
        name = "Unknown";
        city = "Unknown";
        established = 0;
    }

    // Parameterized Constructor
    College(string n, string c, int y) {
        name = n;
        city = c;
        established = y;
    }

    // Copy Constructor
    College(const College &clg) {
        name = clg.name;
        city = clg.city;
        established = clg.established;
    }

    void display() const {
        cout << "College: " << name
             << " | City: " << city
             << " | Established: " << established << endl;
    }
};

int main() {
    College c1; // Default
    College c2("MIT-WPU", "Pune", 1983); // Parameterized
    College c3 = c2; // Copy

    cout << "\n--- College Details ---\n";
    c1.display();
    c2.display();
    c3.display();

    return 0;
}
