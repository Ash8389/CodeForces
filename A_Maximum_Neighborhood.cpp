#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if (n == 2)
    {
        cout << 9 << "\n";
        return;
    }

    int a = (n * n) - 1;
    a += 3 * a - n;

    int b = (n * n) - n - 1;
    b += 4 * b;

    cout << max(a, b) << "\n";
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