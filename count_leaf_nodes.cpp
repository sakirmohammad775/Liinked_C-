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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL; // corner case
    else root = new Node(val);
  
    queue<Node *> q;
    if (root) q.push(root); // corner case

    while (!q.empty())
    {
        // 1.ber kora
        Node *p = q.front();
        q.pop();

        // 2.node niye  kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3.children push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}
void level_order(Node *root)
{

    queue<Node *> q; // we keep node in queue that's why
    q.push(root);
    while (!q.empty())
    {
        // 1.ber kore ana
        Node *f = q.front();
        q.pop();
        // 2.oi node ke niye kaj kora
        cout << f->val << " ";
        // 3.children push kora
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}