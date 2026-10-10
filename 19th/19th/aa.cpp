#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int leftArr[n1],rightArr[n2];
    for(int i=0; i<n1; i++)
    {
        leftArr[i]=arr[left+i];
    }

    for(int j=0; j<n2; j++)
    {
        rightArr[j]=arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=left;
    while(i<n1 && j<n2)
    {
        if(leftArr[i]<=rightArr[j])
        {
            arr[k]=leftArr[i];
            i++;
        }
        else
        {

            arr[k]=rightArr[j];
            j++;

        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=leftArr[i];
        i++;
        k++;
    }

    while(i<n2)
    {
        arr[k]=leftArr[j];
        j++;
        k++;
    }
}



void MergeSort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=left+(right-left)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}

int main()
{
    int n,arr[n];
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    cout<<"Sorted Array:";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
