#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int low=0;
    int high=n-1;
    bool found=false;
    int pos=-1;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if (arr[mid]==key)
        {
            found=true;
            pos=mid;
            break;

        }

        else if (arr[mid]>key)
        {
            high=mid-1;

        }
        else {
            low=mid+1;

        }

    }
    if (found)
    {
        cout << "Found at index:"<<pos <<endl;

    }
    else {
        cout << "Not found";

    }
    return 0;

}
