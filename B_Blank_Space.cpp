#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            maxLen++;
        }
        else
        {
            ans = max(ans, maxLen);
            maxLen = 0;
        }
    }
    ans = max(ans, maxLen);
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