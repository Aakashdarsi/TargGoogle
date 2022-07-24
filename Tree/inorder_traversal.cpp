#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int d){
        this->data = d;
        this->left  = NULL;
        this->right = NULL;
    }
};
void inorder_traversal(Node *root){
    if(root == NULL){
        return ;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    inorder_traversal(root);
}