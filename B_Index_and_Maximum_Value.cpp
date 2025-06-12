#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        char op;
        int l, r;

        cin >> op >> l >> r;
        if (l <= mx && mx <= r)
        {
            if (op == '+')
            {
                mx += 1;
            }
            else
            {
                mx -= 1;
            }
        }
        cout << mx << ' ';
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