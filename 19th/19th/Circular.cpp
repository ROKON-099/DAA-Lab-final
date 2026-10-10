#include<iostream>
using namespace std;
struct Node
{

    int data ;
    Node *next;

    Node (int value)
    {

        data=value;
        next= NULL;

    }

};

void Display( Node *head)
{
    Node *temp=head;

    do
    {

        cout <<temp->data << "->";
        temp=temp->next;


    }

    while (temp !=head);
    cout << temp->data;


}

int main ()
{

    int a,b,c,d;

    cout << "Enter Four values:";

    cin >> a>> b>> c>>d;

    Node*head=new Node (a);
    Node *second=new Node (b);
    Node *third =new Node (c);
    Node *forth = new Node (d);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=head;


    cout << "Circular Linked List is:";
    Display(head);
    return 0;



}
