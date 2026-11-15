#include<iostream>
using namespace std;
int arr[100], mn, mx;
void findminmax(int l, int r)
{
    if (l==r)
    {
        mn=min (mn, arr[l]);
        mx=max (mx,arr[l]);
        return ;


    }

    int mid=(l+r)/2;
    findminmax(l,mid);
    findminmax (mid+1,r);



}

int main ()
{

    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    findminmax (0, n-1);
    cout << "Max:" <<mx <<endl;
    cout << "min:" <<mn <<endl;
    return 0;



}
