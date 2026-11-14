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
       int small=i;


    for (int j=i+1; j<n; j++)
    {
        if (arr[j]<arr[small])
        {
            small=j;

        }
    }
    swap (arr[i], arr[small]);
}

    cout << "sorted array is:";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;

}
