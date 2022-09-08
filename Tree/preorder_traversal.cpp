#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *root){
    if(root == NULL){
        return ;
    }
    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node(30);
(root->right)->left = new Node(40);
(root->right)->right = new Node(50);
preorder(root);
}