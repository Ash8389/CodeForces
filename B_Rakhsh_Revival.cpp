#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    string s;
    cin >> n >> m >> k >> s;

    int i = 0;
    int cnt = 0;
    int zero = 0;

    while (i < n)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        else
        {
            zero = 0;
        }

        if (zero == m)
        {
            cnt++;
            int j = i;
            int tk = k;
            while (j < n && tk--)
            {
                s[j++] = '1';
            }
            zero = 0;
        }
        i++;
    }

    cout << cnt << endl;
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