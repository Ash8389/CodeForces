#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1 && k == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if (k == 1 || k == n)
    {
        cout << -1 << endl;
        return;
    }
    cout << 3 << endl;
    if (k % 2 == 0)
    {
        cout << 1 << " "
             << k << " "
             << k + 1 << endl;
    }
    else
    {
        cout << 1 << " "
             << k - 1 << " "
             << k + 2 << endl;
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