#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string ans = "";

    ans += s1[0];
    ans += s2[0];
    ans += s3[0];

    cout << ans << endl;
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