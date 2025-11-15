#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> val(n + 1, 0);

    bool f = 0;
    int kt = 0;

    for (int i = 0; i < n; i++)
    {
        if (kt > 1 && f)
        {
            val[i] = 1;
            kt--;
        }
        if (s[i] == '1')
        {
            kt = k;
            f = 1;
        }
        if (kt == 1)
        {
            f = 0;
            kt = k;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (val[i] == 0 && s[i] == '1')
        {
            cnt++;
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
