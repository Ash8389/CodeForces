#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (x >= k && y >= k)
    {
        cout << 0 << " " << 0 << " " << k << " " << 0 << endl;
        cout << 0 << " " << 0 << " " << 0 << " " << k << endl;
        return;
    }

    int diff = abs(x - y);

    if (x > y)
    {
        cout << diff << " " << 0 << " " << x << " " << y << endl;
        cout << x - diff << " " << 0 << " " << 0 << " " << y << endl;
    }
    else
    {
        cout << 0 << " " << diff << " " << x << " " << y << endl;
        cout << 0 << " " << y - diff << " " << x << " " << 0 << endl;
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