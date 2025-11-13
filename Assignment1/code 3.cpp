// Program 1(c): Demonstrate class Time - convert HH:MM:SS to total seconds
#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    void accept() {
        cout << "Enter time in HH MM SS format: ";
        cin >> hours >> minutes >> seconds;
    }

    int toSeconds() {
        return (hours * 3600 + minutes * 60 + seconds);
    }

    void display() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
        cout << "Total Seconds: " << toSeconds() << endl;
    }
};

int main() {
    Time t;
    t.accept();
    t.display();
    return 0;
}
