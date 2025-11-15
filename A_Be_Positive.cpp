#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int neg = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            neg++;
        }
        else if (a[i] == 0)
        {
            zero++;
        }
    }

    int res = 0;

    if (neg & 1)
    {
        res += 2;
    }
    res += zero;

    cout << res << "\n";
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