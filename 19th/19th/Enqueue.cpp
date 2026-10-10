#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";

    int queue[n];
    int front=0;
    int rear=-1;

    for (int i=0; i<n; i++)
    {

        cin>> queue[i];
        rear++;

    }

    int value;


    cout<< "Enter a number:";

    cin>>value;


    rear++;
    queue[rear]=value;

    cout << "Queue after Enqueqe operation:" <<endl;



    for (int i=front; i<=rear ; i++)
    {
        cout<< queue[i] << " " << endl;

    }


    return 0;








}



