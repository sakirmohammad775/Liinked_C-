#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->left = NULL; // Initialize next pointer to NULL
        this->right = NULL;
    }
};
int main()
{
    Node *root = new Node(100);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    root->left = a;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;

     

    return 0;
}