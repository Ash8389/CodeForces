#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '1')
            {
                cnt++;
            }
        }
        if (pre != 0 && cnt == pre)
        {
            cout << "SQUARE" << "\n";
            return;
        }
        else if (pre != 0 && cnt != pre)
        {
            cout << "TRIANGLE" << "\n";
            return;
        }
        pre = cnt;
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