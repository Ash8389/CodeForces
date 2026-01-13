#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            sum += abs(a[i] - a[i - 1]);
    }

    int ans = sum;

    for (int i = 1; i < n - 1; i++)
    {
        int cur = sum - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]);

        ans = min(ans, cur);
    }
    ans = min(ans, sum - abs(a[1] - a[0]));
    ans = min(ans, sum - abs(a[n - 1] - a[n - 2]));

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