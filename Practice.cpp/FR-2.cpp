#include<iostream>
using namespace std;
int main ()
{

    int n, total=0;
    cin>>n;
    int w[n], p[n];
    float r[100];
    for (int i=0; i<n; i++)
    {
        cin>>w[i]>>p[i];
        r[i]=(float)p[i]/w[i];



    }

    int c;
    cin>>c;

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (r[i]<r[j])
            {
                swap (r[i],r[j]);
                swap (p[i],p[j]);
                swap (w[i],w[j]);
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if (w[i]<=c )
        {
            total+=p[i];
            c-=w[i];
        }
        else {
            total+=r[i]*c;
            break;

        }
    }
    cout<<" Maximum profit is:" << total;
    return 0;

}
