#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        mp[t]++;
    }

    int op = 0;

    for (auto &pr : mp)
    {
        int num = pr.first;
        int freq = pr.second;

        if (freq < num)
        {
            op += freq;
        }
        else
        {
            op += (freq - num);
        }
    }

    cout << op << "\n";
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