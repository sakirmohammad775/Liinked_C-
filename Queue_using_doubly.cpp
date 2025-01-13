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
        this->prev=NULL;
    }
};
class myQueue
{
public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz = 0;

    void push(int val) // Add an element to the end of the queue //kono kichu return kore na tai void used
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev=tail;
        tail = newnode;
    }

    void pop() // Remove an element from the front of the queue
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;

    }

    int front() // Get the front element
    {
        return head->val;
    }

    int back()
    { // O(1)
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
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