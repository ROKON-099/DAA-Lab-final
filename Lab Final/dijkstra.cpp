#include<iostream>
using namespace std;

int main()
{
    int n,e,s;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> e;

    int u[10], v[10], w[10], d[10], visit[10]={0};

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

    for(int i=0; i<n; i++)
    {
        int mn = 999, x = -1;

        for(int j=0; j<n; j++)
        {
            if(!visit[j] && d[j] < mn)
            {
                mn = d[j];
                x = j;
            }
        }

        if(x == -1)
            break;

        visit[x] = 1;

        for(int j=0; j<e; j++)
        {
            if(u[j] == x && d[x] + w[j] < d[v[j]])
            {
                d[v[j]] = d[x] + w[j];
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
