#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    while (a[i] != n)
    {
        i++;
    }

    for (int j = i; j > 0; j--)
    {
        if (a[j] < a[j - 1])
        {
            cout << "NO" << "\n";
            return;
        }
    }
    for (int j = i; j < n - 1; j++)
    {
        if (a[j] < a[j + 1])
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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