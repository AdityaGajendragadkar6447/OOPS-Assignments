// Program 2(a): Demonstrate use of array of objects
// Class: City - Find city having the highest population

#include <iostream>
#include <string>
using namespace std;

class City {
    string name;
    long population;

public:
    void accept() {
        cout << "Enter city name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter population: ";
        cin >> population;
    }

    long getPopulation() const { return population; }
    string getName() const { return name; }
};

int main() {
    const int SIZE = 5;
    City cities[SIZE];
    long maxPop = 0;
    string maxCity;

    cout << "--- Enter data for 5 cities ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nCity " << i + 1 << ":\n";
        cities[i].accept();
    }

    // Find city with highest population
    for (int i = 0; i < SIZE; i++) {
        if (cities[i].getPopulation() > maxPop) {
            maxPop = cities[i].getPopulation();
            maxCity = cities[i].getName();
        }
    }

    cout << "\nCity with highest population: " << maxCity
         << " (" << maxPop << " people)\n";

    return 0;
}
