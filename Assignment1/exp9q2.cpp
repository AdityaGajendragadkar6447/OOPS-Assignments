// Program 9(b): Read Data from a File using ifstream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin; // input file stream object
    fin.open("student.txt", ios::in);

    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "--- Contents of student.txt ---" << endl;

    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();
    return 0;
}
