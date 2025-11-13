// Program 11(b): Demonstrate STL Map
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students;

    students[101] = "Akansha";
    students[102] = "Rahul";
    students[103] = "Neha";

    cout << "--- Student Records ---" << endl;
    for (auto &entry : students) {
        cout << "Roll No: " << entry.first << ", Name: " << entry.second << endl;
    }

    int searchRoll;
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    if (students.find(searchRoll) != students.end())
        cout << "Found: " << students[searchRoll] << endl;
    else
        cout << "Record not found!" << endl;

    return 0;
}
