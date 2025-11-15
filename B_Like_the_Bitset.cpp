#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int maxCon = 0, curr = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            curr++;
            maxCon = max(maxCon, curr);
        }
        else
        {
            curr = 0;
        }
    }

    if (maxCon >= k)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
    }

    int cnt = 1;
    int opsCnt = n;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans.push_back(cnt);
            cnt++;
        }
        else
        {
            ans.push_back(opsCnt);
            opsCnt--;
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
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