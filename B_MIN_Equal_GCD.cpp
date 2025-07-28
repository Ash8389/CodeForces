#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int miniIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[miniIdx])
        {
            miniIdx = i;
        }
    }

    vector<ll> gcdVec;

    for (int i = 0; i < n; i++)
    {
        if (i == miniIdx)
        {
            continue;
        }

        if (a[i] % a[miniIdx] == 0)
        {
            gcdVec.push_back(a[i]);
        }
    }
    if (gcdVec.size() == 0)
    {
        cout << "NO" << endl;
        return;
    }
    ll gd = gcdVec[0];
    for (int i = 1; i < gcdVec.size(); i++)
    {
        gd = __gcd(gcdVec[i], gd);
    }

    if (a[miniIdx] == gd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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