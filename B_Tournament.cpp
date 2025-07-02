#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, j, k;
    cin >> n >> j >> k;

    vector<int> arr(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(arr[i], mx);
    }
    if (k >= 2)
    {
        cout << "YES" << endl;
        return;
    }
    if (mx <= arr[j - 1])
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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