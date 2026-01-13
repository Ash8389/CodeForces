#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    if (n == 2)
    {
        cout << 2 << "\n";
        return;
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[i + 1] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x = mp[i + 1];
        int y = mp[x];
        if (i + 1 == y)
        {
            cout << 2 << "\n";
            return;
        }
    }

    cout << 3 << "\n";
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