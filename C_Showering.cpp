#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<int> a(n * 2);
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i];
    }
    if ((a[0] >= s) || (m - a[(2 * n) - 1] >= s))
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i < (n * 2) - 1; i += 2)
    {
        if (a[i + 1] - a[i] >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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