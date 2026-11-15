#include<iostream>
using namespace std;

int main()
{
    int n, e;
    cout << "Enter the vertices and edge: ";
    cin >> n >> e;

    int u[10], v[10], w[10], d[10];

    for (int i = 0; i < e; i++)
    {
        cin >> u[i] >> v[i] >> w[i];
    }

    int s;
    cin >> s;

    for (int i = 0; i < n; i++)
        d[i] = 999;

    d[s] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (d[u[j]] != 999 && d[u[j]] + w[j] < d[v[j]])
            {
                d[v[j]] = d[u[j]] + w[j];
            }
        }
    }

    cout << "\nShortest Path is:\n";

    for (int i = 0; i < n; i++)
    {
        cout << s << " -> " << i << " = " << d[i] << endl;
    }

    return 0;
}