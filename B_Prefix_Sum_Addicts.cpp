#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> s(k);
    for (int i = 0; i < k; i++)
    {
        cin >> s[i];
    }

    if (k == 1)
    {
        cout << "YES\n";
        return;
    }

    vector<ll> a(n);
    int i = n - 1;
    int j = k - 1;

    while (j >= 1)
    {
        a[i] = s[j] - s[j - 1];
        i--;
        j--;
    }

    ll sm = 0;
    while (i > 0)
    {
        a[i] = a[i + 1];
        sm += 1ll * a[i];
        i--;
    }

    a[0] = s[0] - sm;
    if (is_sorted(a.begin(), a.end()))
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