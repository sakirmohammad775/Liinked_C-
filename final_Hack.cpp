#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string n, int r, int m) : name(n), roll(r), marks(m) {}
    bool operator<(const Student &s) const
    {
        if (marks == s.marks)
        {
            return roll > s.roll;
        }
        return marks < s.marks;
    }
};
int main()
{
    int n, q;
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.push_back(Student(name, roll, marks));
    }
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            students.push_back(Student(name, roll, marks));
            if (!students.empty())
            {
                Student maxstd = students[0];
                for (const Student &s : students)
                {
                    if (s.marks > maxstd.marks || (s.marks == maxstd.marks && s.roll < maxstd.roll))
                    {
                        maxstd = s;
                    }
                }
                cout << maxstd.name << " " << maxstd.roll << " " << maxstd.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 1)
        {
            if (!students.empty())
            {
                Student maxStd = students[0];
                for (const Student &s : students)
                {
                    if (s.marks > maxStd.marks || (s.marks == maxStd.marks && s.roll < maxStd.roll))
                    {
                        maxStd = s;
                    }
                }
                cout << maxStd.name << " " << maxStd.roll << " " << maxStd.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {

            if (!students.empty())
            {
                Student maxStd = students[0];
                int index = 0;
                for (int i = 1; i < students.size(); i++)
                {
                    if (students[i].marks > maxStd.marks || (students[i].marks == maxStd.marks && students[i].roll < maxStd.roll))
                    {
                        maxStd = students[i];
                        index = i;
                    }
                }
                students.erase(students.begin() + index);
                if (!students.empty())
                {
                    maxStd = students[0];
                    for (const Student &s : students)
                    {
                        if (s.marks > maxStd.marks || (s.marks == maxStd.marks && s.roll < maxStd.roll))
                        {
                            maxStd = s;
                        }
                    }
                    cout << maxStd.name << " " << maxStd.roll << " " << maxStd.marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}