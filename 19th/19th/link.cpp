#include<iostream>
using namespace std;
struct node{
int data;
struct node*next;

};
int main()
{
    struct node *head=new node();
    struct node *second=new node();
    struct node *third=new node();
     head->data=10;
     head->next=second;

     second->data=20;
     second->next=third;

     third->data=30;
     third->next=NULL;

     struct node *temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<"->";
         temp=temp->next;

     }
     cout<<"NULL"<<endl;
     return 0;
}
