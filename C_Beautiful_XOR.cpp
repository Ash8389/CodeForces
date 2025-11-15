#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (__builtin_clz(a) > __builtin_clz(b))
    {
        cout << "-1\n";
    }
    else if (a == b)
    {
        cout << "0\n";
    }
    else
    {
        vector<int> ans;

        for (int i = 0; i < 31; i++)
        {
            int x = (1 << i);

            if (x <= a && (a & x) == 0)
            {
                a += x;
                ans.push_back(x);
            }
        }
        for (int i = 0; i < 31; i++)
        {
            int x = (1 << i);

            if (x <= a && (b & x) == 0)
            {
                ans.push_back(x);
            }
        }

        cout << ans.size() << "\n";
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
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