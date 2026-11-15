#include <iostream>
#include <algorithm>
using namespace std;

int mx, mn, a[100];

void findminmax(int l, int h)
{
    if (l == h)
    {
        mn = min(mn, a[l]);
        mx = max(mx, a[l]);
        return;
    }

    int mid = (l + h) / 2;

    findminmax(l, mid);
    findminmax(mid + 1, h);
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mn = mx = a[0];

    findminmax(0, n - 1);

    cout << "Minimum = " << mn << endl;
    cout << "Maximum = " << mx;

    return 0;
}
