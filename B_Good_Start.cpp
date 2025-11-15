#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int w, h, a, b;
    int x1, y1, x2, y2;

    cin >> w >> h >> a >> b;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 - x2 != 0 && abs(x1 - x2) % a == 0 || y1 - y2 != 0 && abs(y1 - y2) % b == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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