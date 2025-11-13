// Program 9(a): Write Data to a File using ofstream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout; // output file stream object
    fout.open("student.txt", ios::out);

    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    string name;
    int roll;
    float marks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Marks: ";
    cin >> marks;

    fout << "Name: " << name << endl;
    fout << "Roll No: " << roll << endl;
    fout << "Marks: " << marks << endl;

    cout << "\nData successfully written to 'student.txt'." << endl;
    fout.close();
    return 0;
}
