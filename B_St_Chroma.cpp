#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        if (i < x)
        {
            cout << i << " ";
        }
        else if (i == n - 1)
        {
            cout << x << " ";
        }
        else
        {
            cout << i + 1 << " ";
        }
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