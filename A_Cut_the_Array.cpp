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
        int t;
        cin >> t;

        a[i] = t % 3;
    }

    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = (pre[i - 1] + a[i - 1]) % 3;
    }

    int l = 0, r = 0;

    for (int i = 1; i <= n - 2 && !l; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            int p1 = pre[i];
            int p2 = (pre[j] - pre[i] + 3) % 3;
            int p3 = (pre[n] - pre[j] + 3) % 3;

            if ((p1 == p2 && p2 == p3) || (p1 != p2 && p1 != p3 && p2 != p3))
            {
                l = i;
                r = j;
                break;
            }
        }
    }

    if (l)
        cout << l << " " << r << "\n";
    else
        cout << 0 << " " << 0 << "\n";
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