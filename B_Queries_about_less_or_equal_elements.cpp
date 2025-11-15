#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bs(vector<ll> &a, ll t)
{
    ll l = 0;
    ll h = a.size() - 1;

    while (l <= h)
    {
        ll mid = l + (h - l) / 2;

        if (a[mid] > t)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (ll i = 0; i < m; i++)
    {
        ll t;
        cin >> t;
        cout << bs(a, t) << " ";
    }

    return 0;
}