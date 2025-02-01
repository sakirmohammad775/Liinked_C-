#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int age;
    int marks;

    // Constructor to initialize the student
    Student(string name, int age, int marks) {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }

    // Overload comparison operator for multiset
    bool operator<(const Student& other) const {
        if (marks == other.marks) {
            return age < other.age;  // If marks are the same, select the one with smaller age
        }
        return marks > other.marks;  // Otherwise, select the one with higher marks
    }
};

int main() {
    int n;
    cin >> n;  // Number of students
    multiset<Student> students;

    // Reading student data and inserting into multiset
    for (int i = 0; i < n; i++) {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        students.insert(Student(name, age, marks));
    }

    int q;
    cin >> q;  // Number of queries

    while (q--) {
        int command;
        cin >> command;

        if (command == 1) {  // Insert and print current max student
            string name;
            int age, marks;
            cin >> name >> age >> marks;
            students.insert(Student(name, age, marks));

            // Print the student with the highest marks
            cout << students.begin()->name << " " << students.begin()->age << " " << students.begin()->marks << endl;
        }
        else if (command == 2) {  // Print current max student
            if (students.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << students.begin()->name << " " << students.begin()->age << " " << students.begin()->marks << endl;
            }
        }
        else if (command == 0) {  // Delete max student and print new max
            if (!students.empty()) {
                cout << students.begin()->name << " " << students.begin()->age << " " << students.begin()->marks << endl;
                students.erase(students.begin());  // Remove the student with the highest marks
                
                if (students.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << students.begin()->name << " " << students.begin()->age << " " << students.begin()->marks << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
