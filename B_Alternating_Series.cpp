#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << 3 << " ";
            }
        }
        cout << 2;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << 3 << " ";
            }
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