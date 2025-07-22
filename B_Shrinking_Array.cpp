#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int check = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && abs(a[i - 1] - a[i]) <= 1)
        {
            check = 1;
        }
    }

    if (check == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] >= a[i - 1] && a[i] >= a[i + 1])
        {
            cout << 1 << endl;
            return;
        }
        if (a[i] <= a[i - 1] && a[i] <= a[i + 1])
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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