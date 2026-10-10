#include<iostream>
using namespace std;
struct Node {

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

     do {

        cout << temp->data << "->";
        temp=temp->next;
     }
     while (temp !=head);
      cout<< temp->data;



 }
int main ()
{

    int a,b,d,c;
    cout << "Enter Four Number:";
    cin >>a >>b >>c >>d;

    Node*head= new Node (a);
    Node *second= new Node (b);
    Node *third =new Node (c);

    head->next=second;
    second->next=third;
    third->next=head;
    cout << "Circular Linked List is:";
    Traversal (head);
    return 0;

}
