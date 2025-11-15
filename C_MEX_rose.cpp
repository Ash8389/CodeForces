#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1, 0);
    int kCnt = 0;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == k)
        {
            kCnt++;
        }
        a[t]++;
    }
    int need = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] == 0)
        {
            need++;
        }
    }

    int ans = 0;
    // cout << need << " " << kCnt << "\n";
    if (kCnt >= need)
    {
        ans += kCnt;
    }
    else if (kCnt < need && kCnt >= 0)
    {
        ans += kCnt;
        need -= kCnt;
        ans += need;
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