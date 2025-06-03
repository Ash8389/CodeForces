#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 2 && arr[0] == 1 && arr[1] == 1)
    {
        cout << "YES" << endl;
        return;
    }

    int z_cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == 0 && arr[i + 1] == 0)
        {
            cout << "YES" << endl;
            return;
        }
        if (arr[i] == 0)
        {
            z_cnt++;
        }
    }

    if (arr[n - 1] == 0)
    {
        z_cnt++;
    }

    if (z_cnt > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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