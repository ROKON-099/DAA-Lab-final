#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   //selection sort
   for (int i=0; i<n-1; i++)
   {
       for (int j=0; j<n-1-i; j++)
       {
           if (arr[j]> arr[j+1])
           {
               swap (arr[j],arr[j+1]);

           }
       }
   }



cout << "sorted array is:";
 for (int i=0; i<n; i++)
{
    cout << arr[i] << " ";

}
return 0;


}
