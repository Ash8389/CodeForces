#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;
    int t = min(a, b);
    a = max(a, b);
    b = t;

    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (a % b == 0)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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