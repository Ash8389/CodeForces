#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    vector<int> pre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            pre[i + 1] = pre[i] + 1;
        }
        else
        {
            pre[i + 1] = pre[i];
        }
    }
    int total_1 = n - pre[n];
    int ans = -1;
    int near_mid = INT_MAX;

    for (int i = 0; i <= n; i++)
    {
        int right_1 = total_1 - (i - pre[i]);

        if (pre[i] >= (i + 1) / 2 && right_1 >= ((n - i + 1) / 2))
        {
            // cout << i << " ";
            int dist = abs((n / 2) - i);
            if (near_mid > dist || (near_mid == dist && (i < ans || n & 1)))
            {
                ans = i;
                near_mid = dist;
            }
        }
    }

    cout << ans << "\n";
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