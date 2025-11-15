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

    if (a[1] < a[0])
    {
        reverse(a.begin(), a.end());
    }
    if (a[1] < a[0])
    {
        cout << "NO" << endl;
        return;
    }

    int diff = a[1] - a[0];
    int y = (a[0] - diff) / (n + 1);

    if (y < 0)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != y * (n + 1) + (i + 1) * diff)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES" << endl;
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
