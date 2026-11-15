#include<iostream>
using namespace std;

int main()
{
    int n,e,s;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> e;

    int u[10], v[10], w[10], d[10];

    cout << "Enter the vertices and weight:" << endl;

    for(int i=0; i<e; i++)
    {
        cin >> u[i] >> v[i] >> w[i];
    }

    cout << "Enter source: ";
    cin >> s;

    for(int i=0; i<n; i++)
    {
        d[i] = 999;
    }

    d[s] = 0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<e; j++)
        {
            if(d[u[j]] != 999 && d[u[j]] + w[j] < d[v[j]])
            {
                d[v[j]] = d[u[j]] + w[j];
            }
        }
    }

    cout << "\nShortest distance is:\n";

    for(int i=0; i<n; i++)
    {
        cout << s << " -> " << i << " = " << d[i] << endl;
    }

    return 0;
}
