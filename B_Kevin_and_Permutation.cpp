#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int gap = 1 - k - 1;
    int cnt = 1;
    int j = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % gap == 0)
        {
            cout << cnt << " ";
            cnt++;
        }
        else
        {
            cout << n - j << " ";
            j++;
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