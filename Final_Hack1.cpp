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
Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->val)
    {
        root->left = insert(root->left, val);
    }
    else if (val > root->val)
    {
        root->right = insert(root->right, val);
    }
    return root;
}

void in_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        set<int> nonDuplicate;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nonDuplicate.insert(x);
        }
        Node *root = NULL;
        for (int x : nonDuplicate)
        {
            root = insert(root, x);
        }
        in_order(root);
        cout << endl;
    }
    return 0;
}