#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int cost[10] [10], visit[10]={0}, total=0;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>cost[i][j];

        }
    }

    visit[0]=1;

    for (int k=1; k<n; k++)
    {
        int min=9999 , u,v;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (visit[i]==1 && visit[j]==0)
                {
                   if (cost[i][j] !=0 && cost[i][j]<min)
                    {
                        min=cost[i][j];
                        u=i;
                        v=j;

                    }
                }
            }
        }
        cout <<u << "-" <<v <<"=" <<min <<endl;
        total+=min;
        visit[v]=1;

    }
    cout <<"Minimum Cost is:" <<total <<endl;
    return 0;

}
