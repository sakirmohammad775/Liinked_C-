#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l={1,2,4,5};
    list<int> l2(l);            // construct a list with 0 construct
    cout << *l.begin() << endl; //
    for (int val : l2)
    {
        {
            cout << val << endl;
        }
    }
    return 0;
}
