#include<iostream>
using namespace std;
int arr[100], temp[100];

int merge (int l, int r)
{
    if (l>=r)
    {
        return ;

    }
    int mid=(l+r)/2;
    merge (l,mid);
    merge (mid+1,l);

    int i=l, j=mid+1, k=l;
    while (i<=mid && j<=r )
    {
        if (arr[i]< arr[j])
        {
            temp[k++]=arr[i++];

        }
        else
        {
            temp[k++]=arr[j++];

        }
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];

    }
    while (j<=r)
    {
        temp[k++]=arr[j++];

    }
    for (int i=l; i<=r; i++)
    {
        arr[i]=temp[i];

    }
}

int main ()
{


int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    merge (0,n-1);

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;

}

