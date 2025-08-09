#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}
void solve()
{
    int n, d;
    cin >> n >> d;

    n = min(n, 7);
    int f = fact(n);

    for (int m = 1; m < 10; m += 2)
    {
        int rem = 0;
        for (int i = 1; i <= f; i++)
        {
            rem = ((rem * 10) + d) % m;
        }
        if (rem == 0)
        {
            cout << m << " ";
        }
    }
    cout << endl;
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