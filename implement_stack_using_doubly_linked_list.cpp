#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // push operation void
    {                  //  O(1)
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop() // O(1)
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    myStack st; // object of the class is created ,static
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}