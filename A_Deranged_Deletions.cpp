#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int sorted = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && a[i] < a[i - 1])
        {
            sorted = 0;
        }
    }

    if (sorted)
    {
        cout << "NO" << endl;
        return;
    }

    int cnt = 0;
    vector<int> b(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i])
        {
            cnt++;
            ans.push_back(a[i]);
        }
    }
    cout << "YES" << endl;
    cout << cnt << endl;

    for (auto it : ans)
    {
        cout << it << " ";
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