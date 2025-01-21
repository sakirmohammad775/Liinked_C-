#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;   
        this->left = NULL; 
        this->right=NULL;
    }
};

Node* binaryTree(){
    int val;
    cin>>val;
    if(val==-1)
    return NULL;
    Node* root=new Node(val);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        int leftChildValue;
        cin>>leftChildValue;
        if(leftChildValue!=-1){
            temp->left=new Node(leftChildValue);
            q.push(temp->left);
        }
        int rightChildValue;
        cin>>rightChildValue;
        if(rightChildValue!=-1){
            temp->right=new Node(rightChildValue);
            q.push(temp->right);
        }
    }
    return root;

}
int depth(Node* root){
    int depth=0;
    while(root){
        depth++;
        root=root->left;

    }
    return depth;
}
bool perfectBinaryTree(Node* root,int depth,int level=0){
    if(root==NULL)
    return true;
    if(!root->left && !root->right){
        return depth==level+1;
    }
    if(!root->left|| !root->right)
    return false;

    return perfectBinaryTree(root->left,depth,level+1)&&
            perfectBinaryTree(root->right,depth,level+1);

}

int main() {
    Node* root =binaryTree();
    int dep=depth(root);

    if( perfectBinaryTree(root,dep)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}