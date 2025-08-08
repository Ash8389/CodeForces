#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, i, m;
    cin >> n >> i >> m;

    string dir;
    cin >> dir;

    int pos = i;
    int totalSteps = 0;

    for (int j = 0; j < n; j++)
    {
        if (dir[j] == 'L')
        {
            pos--;
        }
        else
        {
            pos++;
        }
        totalSteps++;
        if (pos == 0)
        {
            break;
        }
    }

    if (pos != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll leftsteps = m - abs(totalSteps);
    int j = 0;
    int flag = 0;
    ll cnt = 0;
    ll moves = 0;

    while (j < n && j < leftsteps)
    {
        if (dir[j] == 'L')
        {
            cnt--;
        }
        else
        {
            cnt++;
        }
        moves++;
        if (cnt == 0)
        {
            flag = 1;
            break;
        }
        j++;
    }

    if (!flag)
    {
        cout << 1 << endl;
        return;
    }
    cout << (leftsteps / moves) + 1 << endl;
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