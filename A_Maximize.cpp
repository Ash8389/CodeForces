#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x;
    cin >> x;

    int sum = 0;
    int ans = -1;

    for (int i = 1; i < x; i++)
    {
        if ((__gcd(x, i) + i) > sum)
        {
            sum = (__gcd(x, i) + i);
            ans = i;
        }
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