#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll eq = n / 3;
    ll hao = eq;
    ll rem = eq + (n % 3);

    while (rem > 2)
    {
        eq = rem / 3;
        hao += eq;
        rem = eq + (rem % 3);
    }

    cout << hao << "\n";
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