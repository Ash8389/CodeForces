#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    bool ctn_6 = false;
    bool ctn_5 = false;

    for (int i = 0; i < n; i++)
    {
        if (s.substr(i, 4) == "2026")
        {
            ctn_6 = true;
        }
        else if (s.substr(i, 4) == "2025")
        {
            ctn_5 = true;
        }
    }

    if (ctn_6)
    {
        cout << 0 << "\n";
    }
    else if (ctn_5)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
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