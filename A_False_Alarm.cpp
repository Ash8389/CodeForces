#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int one1 = -1;
    int one2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            one2 = i;
            break;
        }
    }

    if ((one1 != -1) && (one2 != -1) && ((one2 - one1 + 1) <= k))
    {
        cout << "YES" << endl;
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