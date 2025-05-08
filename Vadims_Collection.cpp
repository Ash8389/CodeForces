#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> freq(s.size(), 0);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - '0']++;
    }
    int j = 1;
    string ans = "";
    for (int i = 9; i >= 0; i--)
    {
        int t = i;
        if (freq[t] >= 1)
        {
            ans += to_string(t);
            freq[t]--;
        }
        else
        {
            while (freq[t] <= 0)
            {
                t++;
            }
            freq[t]--;
            ans += to_string(t);
        }
    }
    cout << ans << endl;
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