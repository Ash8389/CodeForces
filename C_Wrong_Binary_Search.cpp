#include <bits/stdc++.h>
using namespace std;
typedef long long j;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool f = true;
    int i = 1;
    while (i <= n)
    {
        if (s[i - 1] == '1')
        {
            i++;
            continue;
        }
        int j = i;
        while (i <= n && s[i - 1] == '0')
        {
            i++;
        }
        int r = i - 1;
        if (r - j + 1 == 1)
        {
            f = false;
        }
    }
    if (!f)
    {
        cout << "NO\n";
        return;
    }
    vector<int> p(n + 1);
    i = 1;
    while (i <= n)
    {
        if (s[i - 1] == '1')
        {
            p[i] = i;
            i++;
            continue;
        }
        int l = i;
        while (i <= n && s[i - 1] == '0')
            i++;
        int r = i - 1;
        for (int j = l; j < r; j++)
        {
            p[j] = j + 1;
        }
        p[r] = l;
    }
    cout << "YES\n";
    for (int j = 1; j <= n; j++)
    {
        cout << p[j] << " ";
    }
    cout << "\n";
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