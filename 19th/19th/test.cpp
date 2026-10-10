#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *list =NULL;  //Head pointer
    Node *tptr=NULL;   //Tail pointer
    Node *nptr=NULL;   //New node pointer

    int n,item;

    cout<<"ENter the number of node:";
    cin>>n;

    for(int i=1; i<n; i++)
    {
        cout <<"Enter data for node "<<i<<":";

        cin>>item;

        //Create a new node
        nptr=new Node;
        nptr->data=item;
        nptr->next=NULL;

        if(list==NULL)
        {
            list=nptr;
            tptr=nptr;
        }
        else
        {
            tptr->next=nptr;
            tptr=nptr;
        }

    }

    tptr=list;
    while(tptr->data!=item )
    {
        tptr=tptr->next;
    }
    if (tptr->data=item)
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND";
    }


    cout<<"->NULL"<<endl;
    return 0;
}
