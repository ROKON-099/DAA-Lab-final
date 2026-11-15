#include<iostream>
using namespace std;
int arr[100];
void partision (int low,int high,int &i,int &j)
{
    int pivot=arr[low];
    i=low;
    j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<high)
            i++;
        while(arr[j]>pivot && j>low)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
void 