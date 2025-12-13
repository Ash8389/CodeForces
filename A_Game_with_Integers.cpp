#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (((n - 1) % 3) == 0 || ((n + 1) % 3) == 0)
    {
        cout << "First\n";
    }
    else
    {
        cout << "Second\n";
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