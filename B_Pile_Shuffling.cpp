#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> p(n, vector<int>(4));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> p[i][j];
        }
    }

    ll cost = 0;
    ll upZero = 0;
    ll upOne = 0;
    for (int i = 0; i < n; i++)
    {

        ll extraZero = (ll)p[i][0] - p[i][2];
        if (extraZero > 0)
        {
            upZero += (ll)extraZero;
            p[i][0] -= (ll)extraZero;
        }

        ll extraOnes = (ll)p[i][1] - p[i][3];

        if (extraOnes > 0)
        {
            upOne += (ll)extraOnes;
            cost += (ll)p[i][0];
        }
    }

    cost += upOne + upZero;

    cout << cost << endl;
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