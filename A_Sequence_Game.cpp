#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, x;
    cin >> n;

    vector<ll> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    cin >> x;

    ll mx = *max_element(a.begin(), a.end());
    ll mn = *min_element(a.begin(), a.end());

    if (x >= mn && x <= mx)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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