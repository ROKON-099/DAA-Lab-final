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


    int key;
    cout<< "Enter a element:";
    cin>>key;
    int low=0;
    int high=n-1;
    bool found=false;

    while (low<=high)
    {

        int mid= (high+low)/2;

        if (arr[mid]==key)
        {
            found=true;
            break;

        }


    else if (key>arr[mid])
    {
        low=mid+1;

    }
    else {
        high=mid-1;

    }
    }
    if (found )
    {

        cout<< "Element is found:";

    }
    else {
        cout<< "Element is not found:";
    }
    return 0;
}
