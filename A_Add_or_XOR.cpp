#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a > b)
    {
        int diff = abs(a - b);
        if (diff > 1 || b == 1 || a % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    else
    {
        int diff = abs(a - b);
        if (x <= y)
        {
            cout << diff * x << endl;
        }
        else
        {
            int sum = 0;
            while (a != b)
            {
                if (a % 2 == 0)
                {
                    sum += y;
                }
                else
                {
                    sum += x;
                }
                a = a + 1;
            }
            cout << sum << endl;
        }
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