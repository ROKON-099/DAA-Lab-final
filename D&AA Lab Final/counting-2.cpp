#include <iostream>
using namespace std;

int mn, mx;

void findMinMax(int arr[], int low, int high)
{
    if (low == high)
    {
        if (arr[low] < mn)
            mn = arr[low];

        if (arr[low] > mx)
            mx = arr[low];

        return;
    }

    int mid = (low + high) / 2;

    findMinMax(arr, low, mid);
    findMinMax(arr, mid + 1, high);
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mn = mx = arr[0];

    findMinMax(arr, 0, n - 1);

    cout << "Minimum = " << mn << endl;
    cout << "Maximum = " << mx << endl;

    return 0;
}
