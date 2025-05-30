#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return;
    }
    else if (n == 1)
    {
        cout << 2 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << 3 << endl;
        return;
    }

    int rem = n % 15;
    int ans = n / 15;

    if (rem == 0)
    {
        ans -= 1;
        ans *= 3;
        ans += 4;

        cout << ans << endl;
    }
    else if (rem == 1)
    {
        ans -= 1;
        ans *= 3;
        ans += 5;

        cout << ans << endl;
    }
    else
    {
        ans *= 3;
        ans += 3;

        cout << ans << endl;
    }
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