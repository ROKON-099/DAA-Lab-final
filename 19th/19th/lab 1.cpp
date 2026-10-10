#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int i,j,min,key;
    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        key=arr[i];
        arr[i]=arr[min];
        arr[min]=key;

         cout<<"Sorted how:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }


}

int main()
{
    int n,i;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    cout<<"Sorted Array:";
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

