#include<iostream>
#include "node.cpp"
using namespace std;

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

Node* deleteAtPosition(Node *head,int position)
{
    if(position == 0)
    {
        Node *new_head = head->next;
        delete head;
        return new_head;
    }
    if(head ==NULL)
    {
        return head;
    }
    if(position <0)
    {
        return head;
    }
    Node *temp = head;
    int currPos = 0 ;
    while(currPos<position-1 and temp->next !=NULL)
    {
        temp= temp->next;
        currPos++;
    }
    if(temp == NULL || temp->next == NULL)
    {
        return head;
    }
    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
    return head;

}


int main(){
    Node *head = takeInput();
    print(head);
    return 0;
}