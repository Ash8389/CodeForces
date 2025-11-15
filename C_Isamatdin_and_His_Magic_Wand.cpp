#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    bool has_odd = false;
    bool has_even = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            has_odd = true;
        }
        else
        {
            has_even = true;
        }
    }

    if (has_odd && has_even)
    {
        sort(a.begin(), a.end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << (i + 1 == a.size() ? "\n" : " ");
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