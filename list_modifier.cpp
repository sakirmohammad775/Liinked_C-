#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 12, 15};
    
    // list<int>l2;
    // l2=l;
    // l2.assign(l.begin(),l.end());

    // l.push_back(40);
    // l.push_front(50);
    // l.pop_back();
    // l.pop_front();  

    l.insert(next(l.begin(), 2), 100);
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}