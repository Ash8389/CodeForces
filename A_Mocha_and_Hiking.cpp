#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if ((a[1] == 1))
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    else if ((a[n] == 0))
    {

        for (int i = 1; i <= n + 1; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    else
    {
        int pos = -1;
        for (int i = 1; i < n; i++)
        {

            if (a[i] == 0 && a[i + 1] == 1)
            {
                pos = i;
                for (int i = 1; i <= pos; i++)
                {
                    cout << i << " ";
                }
                cout << n + 1 << " ";
                for (int i = pos + 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << "\n";
                return;
            }
        }
    }

    cout << -1 << "\n";
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