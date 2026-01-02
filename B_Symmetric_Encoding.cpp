#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<char> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i]);
    }

    sort(v.begin(), v.end());
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());

    int i = 0;
    int j = v.size() - 1;

    unordered_map<char, char> mp;
    while (i <= j)
    {
        mp[v[i]] = v[j];
        mp[v[j]] = v[i];

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        s[i] = mp[s[i]];
    }

    cout << s << "\n";
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