#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool rec(int n, int i)
{
    if (i > n)
    {
        return false;
    }
    if (i == n)
    {
        return true;
    }

    bool mul_10 = rec(n, i * 10);
    bool mul_20 = rec(n, i * 20);

    return (mul_10 || mul_20);
}
void solve()
{
    int n;
    cin >> n;

    cout << (rec(n, 1) ? "YES" : "NO") << "\n";
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