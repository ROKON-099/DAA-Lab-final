#include<iostream>
using namespace std;
struct Node
{

    int data;
    Node *next;

    Node (int value)

    {

        data=value;
        next=NULL;

    }



};

void Traversal (Node*head)
{
    Node*temp=head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp=temp->next;
    }


}

int main ()
{
    int a,b,c,d;
    cout <<"Enter 4 value:";
    cin>>a >>b>>c >>d;

    Node*head= new Node (a);
    Node*second= new Node (b);
    Node *third =new Node (c);
    Node *forth= new Node (d);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=NULL;

    cout << "Linked List Traversal is : ";
    Traversal(head);
    return 0;


}
