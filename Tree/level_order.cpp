#include<iostream>
#include<queue>
using namespace std;
void inorder(Node *root){
    if(root == NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(q.size()!=0){
        Node *curr = q.front();
        q.pop();
        cout<<root->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}