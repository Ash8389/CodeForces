#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> w(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (w[i] == 0)
        {
            cnt++;
            if (cnt == k)
            {
                ans++;
                cnt = 0;
                i++;
            }
        }
        if (w[i] == 1)
        {
            cnt = 0;
        }
    }

    cout << ans << endl;
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