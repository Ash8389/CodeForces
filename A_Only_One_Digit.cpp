#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int mini = (s[0] - '0');
    for (int i = 1; i < s.size(); i++)
    {
        mini = min(mini, s[i] - '0');
    }

    cout << mini << endl;
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