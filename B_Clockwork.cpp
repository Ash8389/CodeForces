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

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] <= 2 * (n - (i + 1)))
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = n - 1; i >= n / 2; i--)
    {
        if (arr[i] <= 2 * (n - (n - i)))
        {
            cout << "NO" << endl;
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