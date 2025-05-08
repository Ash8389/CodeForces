#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = -1;
    ll pre_sum = -1;

    ll ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] != -1 && sum == -1)
        {
            sum = a[i] + b[i];
        }
        else if (b[i] != -1 && sum != -1 && sum != a[i] + b[i])
        {
            ans = 0;
        }
    }
    if (ans == 0)
    {
        cout << ans << endl;
        return;
    }
    ans = 1;
    ll max_a;
    ll min_a;
    if (sum == -1)
    {
        min_a = *min_element(a.begin(), a.end());
        max_a = *max_element(a.begin(), a.end());
        if (k < max_a)
        {
            ans = 0;
            cout << ans << endl;
            return;
        }
        ans = k - (max_a - min_a) + 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] + k < sum || sum < a[i])
            {
                ans = 0;
            }
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