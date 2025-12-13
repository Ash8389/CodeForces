#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }

    int mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(a[i], mx);
    }
    cout << mx + a[n - 1] << "\n";
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