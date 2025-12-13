#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    int tk = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' && tk == 0)
        {
            cnt++;
        }
        if (tk > 0)
            tk--;
        if (s[i] == '1')
        {
            tk = k;
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