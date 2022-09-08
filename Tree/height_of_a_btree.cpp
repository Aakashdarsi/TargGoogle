// height of a binary tree indicates that maximum height from root to the leaf path
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int heightOfBtree(Node *root){
    // if the root is NULL that indicates no tree then the height is 09
    if (root == NULL){
        return 0;
    }
    return 1+max(heightOfBtree(root->left),heightOfBtree(root->right));
}