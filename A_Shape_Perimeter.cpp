#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> cod(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cod[i].first >> cod[i].second;
    }
    int lostPeri = 0;
    for (int i = 1; i < n; i++)
    {
        int x = (m - cod[i].first) * 2;
        int y = (m - cod[i].second) * 2;

        lostPeri += (x + y);
    }

    int totalPeri = n * m * 4;

    cout << (totalPeri - lostPeri) << "\n";
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