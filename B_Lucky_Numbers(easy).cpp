#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    if (n % 2 != 0)
    {
        for (int i = 1; i <= (n + 1) / 2; i++)
        {
            cout << '4';
        }
        for (int i = ((n + 1) / 2 + 1); i <= (n + 1); i++)
        {
            cout << '7';
        }
        return 0;
    }

    ll a = stoll(s);
    ll ans = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        string t = "";
        int cnt_7 = 0;
        int cnt_4 = 0;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                t += "7";
                cnt_7++;
            }
            else
            {
                t += "4";
                cnt_4++;
            }
        }
        if (cnt_4 == cnt_7)
        {
            ll b = stoll(t);
            if (b >= a)
            {
                ans = min(ans, b);
            }
        }
    }
    if (ans == LLONG_MAX)
    {
        int len2 = n + 2;
        string ansStr(len2 / 2, '4');
        ansStr += string(len2 / 2, '7');
        cout << ansStr;
    }
    else
    {
        cout << ans;
    }

    return 0;
}