#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << -1;
    }
    else
    {
        cout << n << " ";
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
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