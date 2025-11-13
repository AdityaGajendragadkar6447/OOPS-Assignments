// Program 11(a): Demonstrate STL Vector
#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    vector<int> nums;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    cout << "\nVector elements: ";
    for (int n : nums)
        cout << n << " ";

    sort(nums.begin(), nums.end());
    cout << "\nSorted elements: ";
    for (int n : nums)
        cout << n << " ";

    cout << "\nSize of vector: " << nums.size() << endl;
    return 0;
}
