#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string s;

    cin >> n >> k >> s;

    int cnt_0 = 0;
    int cnt_1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt_1++;
        }
        else
        {
            cnt_0++;
        }
    }

    cnt_1 -= n / 2 - k;
    cnt_0 -= n / 2 - k;

    if (cnt_1 >= 0 && cnt_0 >= 0 && cnt_0 / 2 + cnt_1 / 2 == k)
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