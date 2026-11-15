#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, W;
    cin >> n;

    int wt[n], val[n];

    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    cin >> W;

    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int w = W; w >= wt[i]; w--)
        {
            dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
        }
    }

    cout << "Maximum Profit = " << dp[W];

    return 0;
}
