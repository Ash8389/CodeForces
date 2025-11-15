#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int z = count(s.begin(), s.end(), '0');
    int m = 0;
    for (int i = 0; i < z; i++)
    {
        if (s[i] == '1')
            m++;
    }

    cout << m << "\n";
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
