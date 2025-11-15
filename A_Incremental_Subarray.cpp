#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(m);

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < m; i++)
    {
        if (a[i - 1] >= a[i])
        {
            cout << 1 << "\n";
            return;
        }
    }
    cout << n - a[m - 1] + 1 << "\n";
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