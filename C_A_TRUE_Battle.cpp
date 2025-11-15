#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int cnt_0 = 0;
    int cnt_1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (
            ((i == 0 || i == n - 1) && s[i] == '1') || (i != n - 1 && s[i] == '1' && s[i + 1] == '1'))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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