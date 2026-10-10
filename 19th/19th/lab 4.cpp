
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i,j,key;
    for(i=0;i>n-1;i++)
    {

        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {

            key=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=key;

        }
        cout<<"Sorted how:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

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
    bubblesort(arr,n);
    cout<<"Sorted Array:";
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
