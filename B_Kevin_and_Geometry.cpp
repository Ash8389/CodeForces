#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;
    int square = -1;
    vector<int> pair;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;

        if (mp[a[i]] == 4)
        {
            square = a[i];
        }

        if (mp[a[i]] == 2)
        {
            pair.push_back(a[i]);
        }
    }

    if (square != -1)
    {
        cout << square << " " << square << " " << square << " " << square << endl;
        return;
    }
    else if (pair.size() > 1)
    {
        cout << pair[0] << " " << pair[0] << " " << pair[1] << " " << pair[1] << endl;
        return;
    }
    else if (pair.size() < 1)
    {
        cout << -1 << endl;
        return;
    }

    int p = pair[0];
    int top = -1;

    for (auto it : mp)
    {
        if (it.second == 2)
            continue;

        if (top != -1)
        {
            if (abs(top - it.first) / 2 < p)
            {
                cout << p << " " << p << " " << top << " " << it.first << " " << endl;
                return;
            }
        }
        top = it.first;
    }

    cout << -1 << endl;
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