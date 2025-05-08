#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int total_ones = 0;
    int total_zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            total_ones++;
        }
        else
        {
            total_zeros++;
        }
    }

    int ans = total_ones * n - total_ones;
    ans += total_zeros;

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