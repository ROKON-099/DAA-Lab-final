#include<iostream>
using namespace std;
struct Node
{

    int data ;
    Node *next;
    Node *Prev;



    Node(int value)

    {

        data=value;
        Prev=NULL;
        next=NULL;
    }

};

void Display (Node * head)
{

    Node* temp=head;

    while (temp !=NULL)
    {

     cout <<temp->data << "<->";
     temp=temp->next;
    }
}

int main ()
{

    int a,b,c,d;

    cout << "Enter 4 values:";
    cin>> a >>b >>c >>d;

    Node*head=new Node (a);
    Node*second= new Node (b);
    Node * third = new Node (c);
    Node * forth = new Node (d);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=NULL;


    second->Prev=head;
    third->Prev=second;
    forth->Prev=third;



    cout << "Doubly linked list is:";
    Display(head);

}

