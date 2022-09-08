#include<iostream>
#include<queue>
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

void level_order_traversal(Node *root){
    if(root == NULL){
        return ;
    }
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!= NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    

}

int main(){

}