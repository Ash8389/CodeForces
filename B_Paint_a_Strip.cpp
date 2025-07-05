#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int res = 1;
    int k = 1;
    while (k < n)
    {
        res++;
        k = (k + 1) * 2;
    }

    cout << res << endl;
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
