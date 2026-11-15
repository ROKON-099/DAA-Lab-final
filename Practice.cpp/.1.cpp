#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int w[n], p[n];

    for (int i=0; i<n; i++)
    {
        cin>>w[i]>>p[i];

    }
    int c;
    cin>>c;

    vector<int> dp(c+1.0);
    for (int i=0; i<n; i++)
    {
        for (int j=c; j>=w[i]; j--)
        {
            dp[j]= max(dp[j], p[i]+ dp[j-w[i]]);

        }
    }
    cout << "Maximum profit is:"<<dp[c];
    return 0;

}
