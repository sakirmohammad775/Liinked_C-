#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
    }
};
class myQueue
{
public:
    Node *head;
    Node *tail;

    void push(int val) // Add an element to the end of the queue //kono kichu return kore na tai void used
    {
        Node* newnode= new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
};

int main()
{
    return 0;
}