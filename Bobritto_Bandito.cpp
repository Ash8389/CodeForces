#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int rem = 0;
    if (m > abs(l))
    {
        rem = m - abs(l);
        cout << l << " " << rem;
    }
    else
    {
        rem = abs(l) - m;
        cout << (-1) * m << " " << 0;
    }
    cout << endl;
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