#include<iostream>
using namespace std;
struct Node
{
public :
    int data ;
    Node *next ;



    Node (int value)
    {

        data=value;
        next=NULL;
    }

};

void display (Node*head)
{

    Node*temp=head;
    while (temp != NULL)
    {

        cout << temp->data << "->";
        temp=temp->next;
    }
}
int main ()
{

    Node*head=new Node(10);
    Node *Second =new Node (15);
    Node *third=new Node (20);
    Node *forth = new Node (25);

    head->next=Second;
    Second->next=third;
    third->next=forth;
    forth->next=NULL;



    cout << "Linked list is :";
    display(head);
    return 0;

}







