#include<iostream>
using namespace std;
void quicksort (int arr[], int start, int end)
{
    if (start>=end)
        return;


    int pivot=arr[end];
    int i=start;

    for (int j=start; j<end; j++)
    {
        if (arr[j] <pivot)
        {
            swap (arr[i],arr[j]);
            i++;

        }
    }


    swap (arr[i], arr[end]);
    quicksort(arr,start, i-1 );
    quicksort(arr, i+1, start);


}

int main ()
{

    int n;
    cout << "enter Numbers :";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i]; // 2. age arr[n] chilo, ekhon arr[i]
    }
    quicksort(arr,0, n-1);

    cout << "merge sort is:";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;



}
