#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int part = m - 1;
    int each_part_have = n / m;
    int extra = n % m > 1 ? n % m - 1 : 0;

    int k_need = part * each_part_have + extra;

    if (k < k_need)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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