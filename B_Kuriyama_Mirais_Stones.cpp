#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> a(n + 1);
    vector<ll> pre1(n + 2, 0);
    vector<ll> pre2(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        pre1[i + 1] = pre1[i] + a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 1; i <= n; i++)
    {
        pre2[i + 1] = pre2[i] + a[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int t, l, r;
        cin >> t >> l >> r;

        if (t == 1)
        {
            cout << pre1[r + 1] - pre1[l] << "\n";
        }
        else
        {
            cout << pre2[r + 1] - pre2[l] << "\n";
        }
    }

    return 0;
}