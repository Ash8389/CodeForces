#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    int n = stoi(s);

    int root = pow(n, 0.5);
    if ((1ll * root * root) != n)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << 0 << " " << root << "\n";
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