#include<bits/stdc++.h>
using namespace std;
int mn,mx, arr[100];

void maxmin(int l, int h)
{
     if (l==h)
     {
         mn=min(mn, arr[l]);
         mx=max (mx,arr[l]);
         return ;

     }
     int mid=(l+h)/2;


     maxmin(l,mid);
     maxmin (mid+1, h);

}

int main () {

int n;
cout << "Enter the size of array:";
cin>>n ;
cout << "Enter " <<n << " Number of element:";
for (int i=0; i<n; i++)
{
    cin>>arr[i];

}
mn=mx=arr[0];
maxmin (0, n-1);

cout << "Maximum:" <<mx <<endl;
cout << "Minimum:" <<mn <<endl;
return 0;







}

