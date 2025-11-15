#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x, n;
    cin >> x >> n;

    if (n % 2 == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << x << "\n";
    }
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