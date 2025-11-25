#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> Prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};

    for (int i = 0; i < Prime.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] % Prime[i] != 0)
            {
                cout << Prime[i] << "\n";
                return;
            }
        }
    }
    cout << -1 << "\n";
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