#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (char ch : s)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
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

    solve();

    return 0;
}