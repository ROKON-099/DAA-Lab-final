#include<iostream>
using namespace std;
int main ()
{

    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout <<"Enter " <<n << " Number of element:";
    int arr[n];
    for (int i=0; i<n ; i++)
    {
        cin>>arr[i];

    }


    int max=arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];

        }
    }
    int count [max+1]={0};
    for (int i=0; i<n; i++)
    {
        count [arr[i]]++;

    }
cout << "Sorted Array is:";
for (int i=0; i<=max; i++)
{
    while (count[i]>0)
    {
        cout << i << " ";
        count [i]--;

    }
}
return 0;

}
