#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    long long half = (ceil)(n / 2.0);

    if (k <= half)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << abs(half - k) * 2 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}