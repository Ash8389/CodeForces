#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r, L, R;
    cin >> l >> r >> L >> R;

    if (l == L && r == R)
    {
        cout << r - l << endl;
    }
    else if (l == L)
    {
        cout << min(r, R) - l + 1 << endl;
    }
    else if (r == R)
    {
        cout << r - max(l, L) + 1 << endl;
    }
    else
    {
        int maxiL = max(l, L);
        int miniR = min(r, R);
        if (miniR < maxiL)
        {
            cout << 1 << endl;
            return;
        }

        cout << miniR - maxiL + 2 << endl;
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