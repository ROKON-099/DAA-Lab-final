#include<iostream>
using namespace std ;
int main ()
{

    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int arr[n];

    for (int i=0; i<n; i++)
    {

        cin>>arr[i];
    }

    cout << " Array is:";
    for (int i=0; i<n ; i++)
    {

        cout<<arr[i] <<" " ;

    }
    cout <<endl;
    int key;

    cout <<"Enter a element:";
    cin>>key;
    int index=-1;

    for (int i=0; i<n; i++)
    {

        if (arr[i]==key)
        {
            index=i;
            break;
        }
    }
    if (index !=-1)
    {

        cout << "Element found at index:" <<index <<endl;


    }
    else
    {
        cout << "Element is not found:";

    }
    return 0;




}
