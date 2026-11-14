#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter " << n << " numbers of array: ";

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   int key;
   cout << "Enter a element:";
   cin>>key;

   int low=0;

   int high=n-1;
   bool found=false;

   while (low<=high)
   {
       int mid= (low+high)/2;
       if (arr[mid]==key)

       {
           found=true;

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
       cout << "Element is found";

   }
    else
    {

        cout << "Element is not found";


    }
    return 0;






}
