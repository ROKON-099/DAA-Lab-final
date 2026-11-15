#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the vertices:";
    cin>>n;
    cout <<"Enter adjancency matrix:"<<endl;
    int dp[100][100];


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {

            cin>>dp[i][j];
            if (i!=j && dp[i][j]==0)
            {
                dp[i][j]=999;

            }
        }
    }

    for (int k=0; k<n; k++)
    {
        for (int i=0; k<n; k++)
        {

            for (int j=0; j<n; j++)
        {
            if (dp[i][k]+dp[j][k]<dp[i][j])
            dp[i][j]=dp[i][k]+dp[j][k];

        }
        }
    }

    for (int i=0; i<n; i++)
    {
        if (dp[i][j]==999)
        {
            cout << "infinity:";

        }
        else {
            cout << dp[i][j] << " ";

        }
        cout <<endl;

    }
    return 0;

}
