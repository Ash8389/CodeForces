#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int diff = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && a[i - 1] != a[i])
        {
            diff = true;
        }
    }

    if (!diff)
    {
        cout << 0 << endl;
        return;
    }

    long long ans = LONG_LONG_MAX;

    for (int i = 0; i < n;)
    {
        int j = i;
        int val = a[i];
        while (j < n && a[j] == val)
        {
            j++;
        }

        ans = min(ans, 1LL * (n - (j - i)) * val);

        i = j;
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