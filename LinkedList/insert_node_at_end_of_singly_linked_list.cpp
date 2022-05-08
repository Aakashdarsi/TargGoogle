#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insert_at_end(Node *head,int data)
{
    Node *temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;


}
void traverse(Node *head)
{
    if(head == NULL)
    {
        return ;
    }
    cout<<head->data<<" ";
    return traverse(head->next);
}


int main()
{
Node *head = new Node(10);
Node *temp1 = new Node(20);
Node *temp3 = new Node(30);
head->next = temp1;
temp1->next = temp3;
head = insert_at_end(head,3);
traverse(head);

return 0;


}