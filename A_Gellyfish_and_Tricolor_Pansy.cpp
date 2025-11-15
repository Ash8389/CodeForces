#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m1 = min(a, c);
    int m2 = min(b, d);

    if (m2 > m1)
    {
        cout << "Flower\n";
    }
    else
    {
        cout << "Gellyfish\n";
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