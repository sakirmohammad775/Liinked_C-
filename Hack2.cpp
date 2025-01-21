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
void leafNodes(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    stack<int> leafNodes;
        while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node->left == NULL && node->right == NULL) {
            leafNodes.push(node->val); 
        }

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    while(!leafNodes.empty()){
        cout<<leafNodes.top()<<" ";
        leafNodes.pop();
    }
    cout<<endl;
}

int main()
{
    Node* root = binaryTree();
    if(root==NULL){
        cout<<"Invalid"<<endl;
        return 0;
    }
    leafNodes(root);
    return 0;
}