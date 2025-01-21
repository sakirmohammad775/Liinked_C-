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
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *binaryTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

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

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}
void levelNode(Node *root, int k)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    int level = 0;

    while (!q.empty())
    {
        int length = q.size();
        if (level == k)
        {
            for (int i = 0; i < length; i++)
            {
                Node *node = q.front();
                q.pop();
                cout << node->val << " ";
            }
            cout << endl;
            return;
        }
        for (int i = 0; i < length; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
            level++;
    }
        cout << "Invalid" << endl;
}
int main()
{
    Node *root = binaryTree();

    int k;
    cin >> k;

    levelNode(root, k);

    return 0;
}
