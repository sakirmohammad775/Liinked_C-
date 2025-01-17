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

void level_order(Node* root){

    queue<Node*>q; //we keep node in queue that's why
    
}


int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;


    return 0;
}