#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of elements in the list
    multiset<int> ms;

    // Reading the initial list of numbers and inserting them into the multiset
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int q;
    cin >> q;  // Number of queries

    while (q--) {
        int command;
        cin >> command;

        if (command == 1) {  // Insert and print current min
            int value;
            cin >> value;
            ms.insert(value);
            cout << *ms.begin() << endl;  // Print the current minimum value
        } 
        else if (command == 2) {  // Print current min
            if (ms.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << *ms.begin() << endl;  // Print the current minimum value
            }
        }
        else if (command == 0) {  // Delete specific value and print new min
            int value;
            cin >> value;

            if (ms.find(value) != ms.end()) {
                ms.erase(ms.find(value));  // Remove only one occurrence
            }

            if (ms.empty()) {
                cout << "Empty" << endl;  // If the list becomes empty
            } else {
                cout << *ms.begin() << endl;  // Print the new minimum value
            }
        }
    }

    return 0;
}
