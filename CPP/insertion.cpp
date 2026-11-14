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
    for (int i=1; i<n-1; i++)
    {

        int j=i;
        while (j>0 && arr[j]< arr[j-1])
        {
            swap (arr[j],arr[j-1]);
            j--;
        }
    }












    cout << "sorted array is:";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;




}

