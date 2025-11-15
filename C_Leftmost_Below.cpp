#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int mini = b[0];
    int max_create = 2 * mini - 1;
    
    for (int i = 1; i < n; i++)
    {
        if (b[i] > max_create)
        {
            cout << "NO" << endl;
            return;
        }
        mini = min(b[i], mini);
        max_create = 2 * mini - 1;
    }

    cout << "YES" << endl;
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