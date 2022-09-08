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


void Level_order_Traversal_Level_By_level(Node *root){
    if(root == NULL){
        return ;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        
        if(curr == NULL){
            q.push(NULL);
            cout<<endl;
            continue;
        }
        else{
            cout<<curr->data<<" ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}


void Level_Order_Traversal_L_By_L_meth2(Node *root){
    if(root == NULL){
        return ;

    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        int count = q.size();
        for(int i=0;i<count;i++){
            Node *curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(!curr->left){
                q.push(curr->left);
            }
            if(!curr->right){
                q.push(curr->right);
            }

        }
        cout<<endl;
    }
}