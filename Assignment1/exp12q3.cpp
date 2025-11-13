// Program 12(c): Simulate Simple Graphics using ASCII
#include <iostream>
#include <unistd.h> // for sleep() on Unix/Linux (optional)
using namespace std;

int main() {
    cout << "Simple Moving Dot Animation\n";

    for (int i = 0; i < 20; i++) {
        cout << "\r"; // return to start of line
        for (int j = 0; j < i; j++)
            cout << " "; // print spaces
        cout << "*";
        cout.flush();
        usleep(100000); // delay (100 ms)
    }

    cout << "\nAnimation Complete!" << endl;
    return 0;
}
