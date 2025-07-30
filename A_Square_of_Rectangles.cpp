#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if (l1 < b1)
    {
        int diff = b1 - l1;

        if ((diff == l2 && diff == l3 && b1 == b2 + b3))
        {
            cout << "YES" << endl;
        }
        else if (diff == l2 + l3 && b1 == b2 && b1 == b3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (l1 > b1)
    {
        int diff = l1 - b1;
        if (diff == b2 && diff == b3 && l1 == l2 + l3)
        {
            cout << "YES" << endl;
        }
        else if (diff == b2 + b3 && l1 == l2 && l1 == l3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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