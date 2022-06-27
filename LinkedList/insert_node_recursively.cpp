#include<iostream>
#include "node.cpp"
using namespace std;
Node* reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        curr = next ;
    }
    return prev;
}
Node *takeInput(){

    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL; 
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}



int main(){
    Node *head = takeInput();
    print(head);
    return 0;
}