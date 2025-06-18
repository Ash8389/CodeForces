#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int i = 0;
    int zero = 0;
    int one = 0;
    if (s[0] == '0')
    {
        zero++;
    }
    while (i < n && s[i] == '0')
        i++;

    while (i < n)
    {
        if (i + 1 < n && s[i] == '1' && s[i + 1] == '0')
        {
            zero++;
        }
        if (s[i] == '1')
        {
            one++;
        }
        i++;
    }
    if (one > zero)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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