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

void input_tree()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.ber kora
        Node *p = q.front();
        q.pop();
        // 2.node niye  kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l != -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r != -1)
            myRight = NULL;
        else
            myRight = new Node(l);

        p->left=myLeft;
        p->right=myRight;

        // 3.children push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

int main()
{
    return 0;
}