#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(n);

    if (n < 5)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        int mid = n / 2;
        int odd = 1;
        int eve = 2;

        int i = 0;

        while (i < n / 2)
        {
            if (odd == 5)
            {
                odd += 2;
                continue;
            }
            if (eve == 4)
            {
                eve += 2;
                continue;
            }
            ans[i] = odd;
            ans[n - i - 1] = eve;
            odd += 2;
            eve += 2;

            i++;
        }
        if (n % 2 == 0)
        {
            ans[mid] = 4;
            ans[mid - 1] = 5;
        }
        else
        {
            ans[mid] = 5;
            ans[mid + 1] = 4;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
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