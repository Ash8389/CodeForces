#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int lastChar = s[n - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (lastChar != s[i])
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
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