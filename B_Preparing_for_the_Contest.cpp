#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        cout << i << " ";
    }
    for (int i = n; i > k; i--)
    {
        cout << i << " ";
    }

    cout << "\n";
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