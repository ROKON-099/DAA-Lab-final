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
    int p=-1;
    bool f=false;
    int l=0;
    int h=n-1;

    while (l<=h)
    {
        int m=(l+h)/2;
        if (arr[m]==key){

            f=true;
            p=m;
            break;

        }

        else if (arr[m]>key)
        {
            h=m-1;

        }
        else  {
            l=m+1;

        }

    }
if (f)
{
    cout << "fount ar index:" <<p<<endl;

}
else {
    cout << "not found:";

}
return 0;


}
