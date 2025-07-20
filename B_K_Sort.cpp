#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> diff;
    ll maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            maxi = a[i];
        }
        else
        {
            if (a[i] >= maxi)
            {
                maxi = a[i];
            }
            else
            {
                diff.push_back(maxi - a[i]);
            }
        }
    }

    sort(diff.begin(), diff.end());

    ll s = diff.size();
    ll sum = 0;
    ll coin = 0;

    for (int i = 0; i < s; i++)
    {
        diff[i] -= sum;
        coin += diff[i] * ((diff.size() - i) + 1);
        sum += diff[i];
    }

    cout << coin << endl;
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