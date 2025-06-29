#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n + 1), a(n + 1);
    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
        mp[temp] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int idx = mp[i];
        swap(b[i], b[idx]);
        mp[i] = i;
        mp[a[i]] = idx;
        swap(a[i], a[idx]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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