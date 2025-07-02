#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int mx = INT_MIN;
    int mxIdx = -1;
    int mn = INT_MAX;
    int mnIdx = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> Premin(n);
    vector<int> Submax(n);

    Premin[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        Premin[i] = min(Premin[i - 1], arr[i]);
    }

    Submax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        Submax[i] = max(Submax[i + 1], arr[i]);
    }

    vector<char> ans(n, '0');
    for (int i = 0; i < n; i++)
    {
        if (Submax[i] == arr[i] || Premin[i] == arr[i])
        {
            ans[i] = '1';
        }
    }
    string s = "";
    for (auto it : ans)
    {
        s += it;
    }
    cout << s << endl;
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