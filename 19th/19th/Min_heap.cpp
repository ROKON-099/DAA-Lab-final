#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int leftchild = 2 * i + 1;
    int rightchild = 2 * i + 2;


    if (leftchild < n && arr[leftchild] < arr[smallest])
    {
        smallest = leftchild;
    }


    if (rightchild < n && arr[rightchild] < arr[smallest])
    {
        smallest = rightchild;
    }

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);


        heapify(arr, n, smallest);
    }
}


int main ()

{

    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout << "Enter " << n << " Number of element:";

int arr[n];
for (int i=0; i<n; i++)
{

    cin>> arr[i];
}


    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }


    for (int i=0; i<n; i++)
    {

        cout << arr[i] << " ";

    }

return 0;


}

