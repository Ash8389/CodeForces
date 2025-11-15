#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    string s;

    cin >> n >> k >> s;

    int cnt_1 = count(s.begin(), s.end(), '1');

    if (k >= cnt_1)
    {
        cout << "Alice" << endl;
        return;
    }

    if (k > n / 2)
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