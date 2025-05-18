#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            a++;
        else if (s[i] == 'B')
            b++;
        else if (s[i] == 'C')
            c++;
        else if (s[i] == 'D')
            d++;
    }

    if (a > n)
    {
        a = n;
    }
    if (b > n)
    {
        b = n;
    }
    if (c > n)
    {
        c = n;
    }
    if (d > n)
    {
        d = n;
    }

    cout << a + b + c + d << endl;
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