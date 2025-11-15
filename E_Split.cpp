#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    unordered_map<int, int> mxcnt;
    for (auto &it : freq)
    {
        if (it.second % k == 0)
        {
            mxcnt[it.first] = it.second / k;
        }
        else
        {
            cout << 0 << "\n";
            return;
        }
    }

    ll ans = 0;
    unordered_map<int, int> window_count;

    int i = 0;
    for (int j = 0; j < n; j++)
    {
        window_count[a[j]]++;
        while (window_count[a[j]] > mxcnt[a[j]])
        {
            window_count[a[i]]--;
            i++;
        }
        ans += (j - i + 1);
    }

    cout << ans << "\n";
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
