#include<iostream>
using namespace std;
int mx,mn, arr[100];
void findminmax(int l, int r)
{
    if (l==r)
    {
        mx=max (mx, arr[l]);
        mn=min (mn, arr[l]);
        return ;


    }
    int mid=(l+r)/2;
    findminmax(l,mid);
    findminmax(mid+1,h);

}
int main ()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    mn=mx=arr[0];
    findminmax(0,n-1);

    cout << "Maximum:" <<mx <<endl;

    cout << "Minumun:"<<mn <<endl;

    return 0;

}

