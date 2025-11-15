#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sa, sb;
    string a, b, t;
    cin >> sa >> a >> sb >> b >> t;

    for (int i = 0; i < sb; i++)
    {
        if (t[i] == 'V')
        {
            a = b[i] + a;
        }
        else
        {
            a = a + b[i];
        }
    }

    cout << a << endl;
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