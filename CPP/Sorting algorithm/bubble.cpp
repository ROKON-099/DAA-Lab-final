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


    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; i++)
        {

            if (arr[j]>arr[j+1])
            {
                swap (arr[j], arr[j+1]);

            }
        }
    }
    cout << "sorted array is:";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;

}
