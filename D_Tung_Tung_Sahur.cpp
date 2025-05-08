#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string p, s;
    cin >> p >> s;

    int i = 0, j = 0;

    while (i < p.size() && j < s.size())
    {
        int cnt_p = 0;
        char ch_p = p[i];
        int cnt_s = 0;
        char ch_s = s[j];

        while (i < p.size() && p[i] == ch_p)
        {
            cnt_p++;
            i++;
        }
        if (ch_p != ch_s)
        {
            cout << "NO" << endl;
            return;
        }
        while (j < s.size() && s[j] == ch_p)
        {
            cnt_s++;
            j++;
        }
        if (cnt_s > cnt_p * 2 || cnt_s < cnt_p)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (i >= p.size() && j < s.size() || i < p.size() && j >= s.size())
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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
