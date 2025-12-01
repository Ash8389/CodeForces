#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(2 * n);
    unordered_map<long long, int> freq;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int o = 0, e = 0;
    for (auto p : freq)
    {
        if (p.second % 2 == 1)
        {
            o++;
        }
        else
        {
            e++;
        }
    }

    long long ans = 0;

    if (o == 0)
    {
        if ((e % 2) != (n % 2))
        {
            e--;
        }
        ans = 2ll * e;
    }
    else
    {
        ans = (long long)o + 2ll * e;
    }

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