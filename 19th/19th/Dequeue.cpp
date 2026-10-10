#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int front=0;
    int rear=-1;
    int queue[n];

    for (int i=0; i<n; i++)
    {

        cin>>queue[i];
        rear++;

    }

    cout<<"Delete element:" << queue[front] <<endl;
    front++;


    cout<<"Queue after Dequeue:" <<endl;

    for (int i=front; i<=rear; i++)
    {

        cout <<queue[i] << " " <<endl;


    }
    return 0;
}

