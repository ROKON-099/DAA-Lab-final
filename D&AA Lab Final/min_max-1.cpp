#include<iostream>
using namespace std;
int max,min ;
void Minmax (int low, int high,int arr[])
{

    {

        if (arr[low]<min)

            min=arr[low];
        if (arr[low]>max)
            max=arr[low];

        return ;
    }
    int mind=(low+high)/2;
    Minmax(mid,low,arr)
    Minmax(arr, mid+1,high)


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

