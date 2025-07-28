#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    while ((a & 1) == (b & 1))
    {
        cnt++;
        a = a >> 1;
        b = b >> 1;

        if (a == 0 && b == 0)
            break;
    }

    cout << ((long long)1 << cnt) << endl;
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