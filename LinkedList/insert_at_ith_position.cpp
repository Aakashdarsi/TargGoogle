#include<iostream>
#include "node.cpp"
using namespace std;

Node *takeInput()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1)
    {
        Node *new_node = new Node(data);
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else{
            tail->next = new_node;
            tail= tail->next;
        }
        cin>>data;

    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
void insert_at_ith_position(Node *head,int position,int data)
{
    
}

int main()
{
    Node *head = takeInput();
    print(head);
    return 0;
}