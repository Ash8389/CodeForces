#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<ll> &a, double avg)
{
    int cnt = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (avg > (float)a[i])
        {
            cnt++;
        }
    }
    if (cnt > n / 2)
    {
        return true;
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll sm = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sm += a[i];
    }
    if (n <= 2)
    {
        cout << -1 << "\n";
        return;
    }

    ll l = 0;
    ll h = LLONG_MAX;

    while (l <= h)
    {
        ll mid = l + (h - l) / 2;
        double avg = ((double)(sm + mid) / (n * 2));
        // cout << mid << " ";

        if (check(a, avg))
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l << "\n";
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