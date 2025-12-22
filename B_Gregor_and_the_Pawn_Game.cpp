#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string e, g;
    cin >> e >> g;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (g[i] == '1')
        {
            if (e[i] == '0')
            {
                e[i] = 'x';
                cnt++;
            }
            else if (i - 1 >= 0 && e[i - 1] == '1')
            {
                e[i - 1] = 'x';
                cnt++;
            }
            else if (i + 1 < n && e[i + 1] == '1')
            {
                e[i + 1] = 'x';
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
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