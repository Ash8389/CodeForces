#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> odd;
    ll evenSum = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
        {
            evenSum = 1ll * evenSum + temp;
        }
        else
        {
            odd.push_back(temp);
        }
    }

    ll ans = 0;
    if (odd.size() > 0)
    {
        ans = evenSum;
    }

    sort(odd.rbegin(), odd.rend());
    int s = odd.size();

    for (int i = 0; i < (s + 1) / 2; i++)
    {
        ans += odd[i];
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