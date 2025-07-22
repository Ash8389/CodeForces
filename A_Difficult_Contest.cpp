#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    while (mp['T'] != 0)
    {
        cout << "T";
        mp['T']--;
    }
    mp.erase('T');
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'T')
        {
            continue;
        }
        cout << s[i];
    }

    cout << endl;
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