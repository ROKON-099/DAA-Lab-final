#include<iostream>
using namespace std;
int arr[100];
void partision (int l, int r)
{
    int pivot =r;
    int i=l-1;
    for (int j=l; j<r; j++)
    {
        if (arr[j]<=arr[pivot])
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}
void quicksort (int l, int r)
{
    if (l<r)
    {
       int p = partision(l,r);
        quicksort(l,p-1);
        quicksort(p+1,r);

    }
}