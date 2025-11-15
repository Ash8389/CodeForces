#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isTrue(int x, int y, int z)
{
    if (x + y > z && x + z > y && z + y > x)
    {
        return true;
    }

    return false;
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (isTrue(n, i, n ^ i))
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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