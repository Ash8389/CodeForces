#include <bits/stdc++.h>
using namespace std;

const int MAX = 200001;
int fib[MAX] = {0};

void preProcess()
{
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= 15; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string ans = "";
    for (int i = 0; i < m; i++)
    {
        int w, l, h;
        cin >> w >> l >> h;

        if (fib[n] <= w && fib[n] <= l && fib[n] <= h)
        {
            int remW = w - fib[n];
            int remL = l - fib[n];
            int remH = h - fib[n];

            if (remW >= fib[n - 1] || remL >= fib[n - 1] || remH >= fib[n - 1])
            {
                ans += '1';
                continue;
            }
        }
        ans += '0';
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    preProcess();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}