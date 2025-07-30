#include <bits/stdc++.h>
using namespace std;
const long long MAX = 1e18 + 5;
bool good[MAX] = {1};

void prePro()
{
    for (int i = 0; i < MAX; i++)
    {
        good[i] = true;
    }

    for (int i = 2; i <= 9; i++)
    {
        for (int j = i; j < MAX; j += i)
        {
            good[j] = false;
        }
    }
}

void solve()
{
    long long l, r;
    cin >> l >> r;

    long long cnt = 0;

    for (int i = l; i <= r; i++)
    {
        if (good[i] == false)
        {
            cnt++;
        }
    }
    cout << (r - l + 1) - cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    prePro();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}