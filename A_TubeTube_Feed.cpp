#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int ent = -1;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (t >= a[i] && b[i] > ent)
        {
            ent = b[i];
            ans = i + 1;
        }
        t--;
    }
    cout << ans << "\n";
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