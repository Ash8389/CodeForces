#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, k;
    cin >> n >> l >> r >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < (1 << n); i++)
    {
        int mn = 1e6 + 1;
        int mx = 0;
        int sm = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sm += a[j];
                mx = max(a[j], mx);
                mn = min(a[j], mn);
                cnt++;
            }
        }
        if (cnt > 1)
        {
            if (sm >= l && sm <= r && ((mx - mn) >= k))
            {
                ans++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}