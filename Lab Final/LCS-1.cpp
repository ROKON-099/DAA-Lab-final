#include<iostream>
using namespace std;
int main ()
{
    string a,b;
    cin>>a>>b;


    int m=a.length();
    int n=b.length();


    int dp[100] [100]={0};

    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++)
        {
            if (a[i-1] == b[j-1])
            {
                dp[i][j]= dp[i-1][j-1]+1;

            }
            else {

                dp[i][j]=max (dp[i-1][j], dp[j-1][i]);

            }
        }
    }
    cout << "LCS is: " << dp [m][n];
    return 0;

}
