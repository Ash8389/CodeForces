#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int x = abs(a[0]);
    int lessCount = 0;

    for (int i = 1; i < n; ++i)
    {
        if (abs(a[i]) > x)
            lessCount++;
    }

    if (lessCount >= n / 2)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}