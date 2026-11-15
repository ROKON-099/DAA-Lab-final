#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, e = 0, total = 0;
    int u[100], v[100], w[100], parent[10];

    cin >> n;

    int cost[10][10];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (cost[i][j] != 0)
            {
                u[e] = i;
                v[e] = j;
                w[e] = cost[i][j];
                e++;
            }

    // Sort edges
    for (int i = 0; i < e; i++)
        parent[i] = i;

    sort(w, w + e);

    for (int i = 0; i < n; i++)
        parent[i] = i;

    int count = 0;

    for (int i = 0; i < e && count < n - 1; i++)
    {
        int a = u[i], b = v[i];

        while (parent[a] != a) a = parent[a];
        while (parent[b] != b) b = parent[b];

        if (a != b)
        {
            total += w[i];
            parent[a] = b;
            count++;
        }
    }

    cout << "Minimum Cost = " << total;

    return 0;
}
