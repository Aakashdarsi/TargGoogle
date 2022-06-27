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

int getLength(Node *head)
{
    int count = 0 ;
    while(head!= NULL)
    {
        count++;
        head = head->next;
    }return count;
}

int getMiddle(Node *head)
{
    int len = getLength(head);
    int position = (len>>1)+1;
    int cp = 0;
    Node *temp = head;
    while(cp<position-1)
    {
        cp++;
        temp=temp->next;
    }
    return temp->data;
}

int main(){
    Node *head = takeInput();
    print(head);
    cout<<endl;
    cout<<getMiddle(head);
    return 0;
}