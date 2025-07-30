#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int cntB = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            cntB++;
        }
    }
    if (s[n - 1] == 'A' && s[n - 2] == 'A')
    {
        cout << "Alice" << endl;
    }
    else if (s[0] == 'A' && s[n - 1] == 'A')
    {
        cout << "Alice" << endl;
    }
    else if (cntB == 1 && s[0] == 'A' && s[n - 1] == 'B')
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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