
#include <bits/stdc++.h>
using namespace std;
int a[100], mn = 9999, mx = -9999;

void solve(int l, int r) {
    if (l == r) {
        mn = min(mn, a[l]);
        mx = max(mx, a[l]);
        return;
    }
    int m = (l + r) / 2;
    solve(l, m);
    solve(m + 1, r);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    solve(0, n - 1);
    cout << mn << " " << mx;
}