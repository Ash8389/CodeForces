#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int k, x;
    cin >> k >> x;

    while (k > 0)
    {
        x *= 2;
        k--;
    }

    cout << x << "\n";
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