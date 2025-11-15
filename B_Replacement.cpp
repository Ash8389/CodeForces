#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    string s, r;
    cin >> s >> r;

    int cnt_1 = count(s.begin(), s.end(), '1');
    int cnt_0 = count(s.begin(), s.end(), '0');

    if (cnt_0 == 0 || cnt_1 == 0)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (r[i] == '0')
        {
            cnt_1--;
        }
        else
        {
            cnt_0--;
        }
        if (cnt_0 == 0 || cnt_1 == 0)
        {
            cout << "NO" << endl;
            return;
        }
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