#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

void solve()
{
    int n, k;
    cin >> n >> k;
    mp.clear();
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    multiset<int> ms;
    for (auto it : mp)
    {
        ms.insert(it.second);
    }
    int ans = mp.size();

    for (auto it : ms)
    {
        if (it <= k)
        {
            k -= it;
            ans--;
        }
        if (k <= 0)
        {
            break;
        }
    }

    cout << (ans > 0 ? ans : 1) << endl;
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