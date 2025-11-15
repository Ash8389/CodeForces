#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << "\n";
    for (auto it : ans)
    {
        cout << it << " ";
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