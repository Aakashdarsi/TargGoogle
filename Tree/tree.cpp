#include<iostream>
using namespace std;
class Node{
    int data;
    Tree *left;
    Tree *right;
    public:
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
}