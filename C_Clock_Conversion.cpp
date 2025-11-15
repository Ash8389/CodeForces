#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    int h = stoi(s.substr(0, 2));
    string ans = "";
    if (h == 0)
    {
        ans = "12";
        ans = ans + s.substr(2, 3) + " AM";
    }
    else if (h == 12)
    {
        ans = "12";
        ans = ans + s.substr(2, 3) + " PM";
    }
    else if (h > 12)
    {
        string hr = to_string(h % 12);
        if (hr.size() == 1)
        {
            ans = "0";
            ans = ans + hr;
        }
        else
        {
            ans = hr;
        }
        ans = ans + s.substr(2, 3) + " PM";
    }
    else
    {
        ans = s + " AM";
    }

    cout << ans << "\n";
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