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
    if (val == -1)
        return NULL;
    
    Node *root=new Node(val);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        int leftVal,rightVal;
        cin>>leftVal>>rightVal;
        if(leftVal!=-1){
            temp->left=new Node(leftVal);
            q.push(temp->left);
        }
        if(rightVal!=-1){
            temp->right=new Node(rightVal);
            q.push(temp->right);
        }
    }
    return root;
}
int sum_leaf(Node*root){
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL){
        return 0;
    }
    int leftSideSum=sum_leaf(root->left);
    int rightSideSum=sum_leaf(root->right);
    int sum=root->val+leftSideSum+rightSideSum;
    return sum;
}

int main()
{
    Node*root=input_tree();
    cout<<sum_leaf(root)<<endl;

    return 0;
}