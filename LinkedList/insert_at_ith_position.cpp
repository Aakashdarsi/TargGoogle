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
Node* insert_at_ith_position(Node *head,int position,int data)
{
    Node *new_node = new Node(data);
    if(position == 0)
    {
        new_node->next = head;
        head = new_node;
        return head;
    }
    int count = 0;
    Node *temp = head;
    while(count<position-1 and temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    if(temp->next != NULL)
    {
        new_node->next = temp->next;
        temp->next = new_node;
    }
    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);
    int i,data;
    cin>>i>>data;
    head = insert_at_ith_position(head,i,data);
    print(head);
    return 0;
}