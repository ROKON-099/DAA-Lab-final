#include<iostream>
using namespace std ;
int main ()
{

    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int arr[n];

    for (int i=0; i<n; i++)
    {

        cin>>arr[i];
    }

  int mv= arr[0];
  for (int i=0; i<n; i++)
  {
      if (arr[i]>mv)
      {
          mv=arr[i];
      }
  }
int count [mv +1] ={0};

for (int i=0; i<n; i++)
{
    count [arr[i]]++;

}

cout << "sorted array is:";

for (int i=0; i<=mv; i++)
{
    while (count[i] >0)
    {
        cout << i << " ";
        count [i]--;

    }
}

    return 0;

}


