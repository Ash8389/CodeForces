#include <bits/stdc++.h>
using namespace std;

bool canHapp(int x, int y)
{
    int big = max(x, y), small = min(x, y);
    return big <= 2 * small + 2;
}

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x1 = a, y1 = b;
    int x2 = c - a, y2 = d - b;

    if (x2 < 0 || y2 < 0)
    {
        cout << "NO\n";
        return;
    }

    if (canHapp(x1, y1) && canHapp(x2, y2))
        cout << "YES\n";
    else
        cout << "NO\n";
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
