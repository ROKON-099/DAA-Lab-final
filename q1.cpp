#include<iostream>
using namespace std;
void quicksort(int arr[], int end , int start)
{
    if (start>=end)
        return ;

    int pivot=arr[end];
    int i=start;

    for (int j=start; j<end; j++)
    {
        if (arr[j] <pivot)
        {
           swap (arr[i],arr[j]) ;
           i++;

        }

    }

   swap ( arr[i],  arr[end]);
    quicksort(arr, start, i-1);
     quicksort(arr, i+1, end);



}


int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
quicksort(arr,0 ,n-1);

cout <<"sorted array is:";
for (int i=0; i<n; i++)
{
    cout << arr[i] << " ";

}
return 0;
}

