#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if ((n - b) & 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (b >= a)
    {
        cout << "YES" << endl;
        return;
    }

    if (((a - b) & 1) == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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