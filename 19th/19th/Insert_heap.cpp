#include <iostream>
using namespace std;

void insertHeap(int arr[], int &n, int value)
{
    int i = n;
    arr[n] = value;
    n++;


    while (i > 0)
    {
        int parent = (i - 1) / 2;

        if (arr[parent] < arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else
        {
            break;
        }
    }
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftchild = 2 * i + 1;
    int rightchild = 2 * i + 2;

    if (leftchild < n && arr[leftchild] > arr[largest])
    {
        largest = leftchild;
    }

    if (rightchild < n && arr[rightchild] > arr[largest])
    {
        largest = rightchild;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{

    int heapSize = 0;

    for (int i = 0; i < n; i++)
    {
        insertHeap(arr, heapSize, arr[i]);
    }


    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    heapsort(arr, n);

    cout << "Sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

