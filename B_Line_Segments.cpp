#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long px, py, qx, qy;
    cin >> px >> py >> qx >> qy;

    long long dx = px - qx;
    long long dy = py - qy;
    long long dist = (dx * dx) + (dy * dy);

    vector<long long> a(n);
    long long total = 0;
    long long maxi = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        total += a[i];
        maxi = max(maxi, a[i]);
    }

    if (total * total < dist)
    {
        cout << "NO" << endl;
        return;
    }

    long long mini = max(0ll, 2 * maxi - total);

    if (((dist) >= (mini * mini)) && ((dist) <= (total * total)))
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
