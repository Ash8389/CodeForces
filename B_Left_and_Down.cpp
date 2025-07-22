#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, k;
    cin >> x >> y >> k;
    long long g = __gcd(x, y);
    long long need = max((x + k - 1) / k, (y + k - 1) / k);
    if (g >= need)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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
