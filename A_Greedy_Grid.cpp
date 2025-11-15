#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x == 1 || y == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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