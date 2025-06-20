#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    int sum = p1 + p2 + p3;

    if (sum % 2 == 0)
    {
        if (sum - p3 <= p3)
        {
            cout << sum - p3 << endl;
            return;
        }
        else
        {
            cout << ((p1 + p2) - p3) / 2 + p3 << endl;
            return;
        }
    }
    else
    {
        cout << -1 << endl;
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