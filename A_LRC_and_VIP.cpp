#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int same = 1;
    int maxi_idx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi_idx = arr[i] > arr[maxi_idx] ? i : maxi_idx;
        if (i > 0)
        {
            if (arr[i] != arr[i - 1])
            {
                same = 0;
            }
        }
    }

    if (same)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    for (int i = 0; i < n; i++)
    {
        if (i == maxi_idx)
        {
            cout << "2" << " ";
        }
        else
        {
            cout << "1" << " ";
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