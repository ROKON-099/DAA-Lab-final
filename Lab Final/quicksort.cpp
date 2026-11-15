#include <iostream>
using namespace std;

int arr[100];

int partition(int l, int r)
{
    int pivot = r;
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] <= arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[r]);

    return i + 1;
}

void quicksort(int l, int r)
{
    if (l < r)
    {
        int p = partition(l, r);

        quicksort(l, p - 1);
        quicksort(p + 1, r);
    }
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
