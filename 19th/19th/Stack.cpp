#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout<< "Enter " << n << " Number of element:";

    int top=-1;
    int stack[n];

    for (int i=0 ; i<n; i++)
    {

        cin>>stack[i];
        top++;


    }
    cout <<endl;
    for (int i=top ; i>=0; i--)


    {

        cout << stack[i] << " " <<endl;



    }

    return 0;


}
