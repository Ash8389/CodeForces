#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll step(int n, int a, string &s)
{
    ll ans = 0;
    int i = 0;

    if (s.find('B') == string::npos)
    {
        ans += a;
        return ans;
    }

    while (a > 0)
    {
        if (s[i] == 'A')
        {
            a -= 1;
        }
        else
        {
            a = a / 2;
        }
        i = (i + 1) % n;
        ans++;
    }

    return ans;
}
void solve()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;
    unordered_map<ll, ll> mp;

    for (int i = 0; i < q; i++)
    {
        ll a;
        cin >> a;

        if (!mp.count(a))
        {
            mp[a] = step(n, a, s);
        }

        cout << mp[a] << "\n";
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
