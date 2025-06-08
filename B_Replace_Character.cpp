#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_map<char, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }
    vector<pair<int, char>> v;
    for (auto it : freq)
    {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());
    s[s.find(v.front().second)] = v.back().second;

    cout << s << endl;
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