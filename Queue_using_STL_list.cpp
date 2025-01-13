#include <bits/stdc++.h>
using namespace std;


class myQueue
{
public:
    list<int>l;

    void push(int val) // Add an element to the end of the queue //kono kichu return kore na tai void used
    {
       l.push_back(val);
    }

    void pop() // Remove an element from the front of the queue
    {
       l.pop_front();

    }

    int front() // Get the front element
    {
        return l.front();
    }

    int back()
    { // O(1)
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    cout << q.front() << " " << q.back() << " " << q.size() << endl;
    return 0;
}