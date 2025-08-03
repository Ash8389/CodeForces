#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    int delr[] = {-a, -a, a, a, -b, b, -b, b};
    int delc[] = {-b, b, -b, b, -a, -a, a, a};
    set<pair<int, int>> kingMove, queenMove;
    for (int i = 0; i < 8; i++)
    {
        int nr = xk + delr[i];
        int nc = yk + delc[i];

        kingMove.insert({nr, nc});
    }
    for (int i = 0; i < 8; i++)
    {
        int nr = xq + delr[i];
        int nc = yq + delc[i];

        queenMove.insert({nr, nc});
    }
    int ans = 0;
    for (auto it : kingMove)
    {
        if (queenMove.count(it) != 0)
        {
            ans++;
        }
    }

    cout << ans << endl;
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