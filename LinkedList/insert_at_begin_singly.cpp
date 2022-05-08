#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data =  x;
        next = NULL;
    }
};

Node *insert_at_begin(Node *head ,int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}
void printLList(Node *head)
{
    if(head == NULL)
    {
        return ;
    }
    cout<<head->data<<" ";
    printLList(head->next);

}
int main()
{
    Node *head = NULL;
    head = insert_at_begin(head, 20);
    head = insert_at_begin(head, 30);
    head = insert_at_begin(head,40);
    printLList(head);
    return 0;
}