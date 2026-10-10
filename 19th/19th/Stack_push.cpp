
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";

    int stack[n];
    int top=-1;

    for (int i=0; i<n; i++)
    {

        cin>> stack[i];
        top++;

    }

    int value;


    cout<< "Enter a number:";

    cin>>value;


    top++;
    stack[top]=value;

    cout << "Stack after push:" <<endl;



    for (int i=top; i>=0 ; i--)
    {
        cout<< stack[i] << " " << endl;

    }


    return 0;








}


