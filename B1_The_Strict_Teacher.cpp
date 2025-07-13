#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, q;
    int m1, m2, q1;

    cin >> n >> m >> q >> m1 >> m2 >> q1;
    if (m1 > m2)
    {
        swap(m1, m2);
    }

    if (q1 < m1)
    {
        cout << m1 - 1 << endl;
    }
    else if (q1 > m2)
    {
        cout << n - m2 << endl;
    }
    else
    {
        cout << ((m2 - m1) / 2) << endl;
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