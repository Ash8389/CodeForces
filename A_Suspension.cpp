#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, y, r;
    cin >> n >> y >> r;

    int ans = min(n, y / 2 + r);

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