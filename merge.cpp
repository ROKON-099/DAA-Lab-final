#include<iostream>
using namespace std;
int temp[1000];
void mergesort (int arr[], int left , int right)
{

    if (left>=right)

        return ;

        int mid=(left+right)/2;
        mergesort(arr, left,mid);
        mergesort(arr,mid+1,right);


        int i=left;
        int j=mid+1;
        int k=left;

        while (i<=mid && j<=right)
        temp[k++]= arr[i] <arr[j] ? arr[i++] : arr[j++];
        while (i<=mid)
            temp[k++]=arr[i++];
        while (j<=right)
            temp[k++]=arr[j++];
        for (k=left ; k<=right ; k++)
        {
            arr[k]=temp[k];
        }


}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
