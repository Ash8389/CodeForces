#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int i = 0;
    while (i < s.size())
    {
        int cnt = 0;
        char p = s[i];
        while (i < s.size() && s[i] == p)
        {
            cnt++;
            i++;
        }
        if (cnt >= 7)
        {
            cout << "YES";
            return;
        }
    }

    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}