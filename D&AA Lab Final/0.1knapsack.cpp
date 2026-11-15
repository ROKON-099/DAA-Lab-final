#include<iostream>
#include<vector>
using namespace std;
int main ()
{

    int n,c;
    cout << "Enter the number of item:";
    cin>>n;
    cout << "Enter the weight and Value of each item:" <<endl;
    int w[n];
    int  v[n];
    for (int i=0; i<n; i++)
    {
        cin>>w[i]>> v[i];

    }
    cout << "Enter the capacity:";
    cin>>c;
    vector<int>dp(c+1,0);

    for (int i=0; i<n; i++)
    {
        for ( int j=c; j>=w[i]; j--)
        {dp[j]= max (dp[j], v[i]+ dp[j-w[i]]);
    }
    }

    cout << "Maximum Profit=" <<dp[c];
  return 0;




}

