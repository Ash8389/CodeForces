#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());
    int cnt = 0;
    int i = 0;
    for (; i < n; i++)
    {
        if (arr[i] >= x)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    while (i < n)
    {
        int mini = INT_MAX;
        int tn = 0;
        int st = 0;

        while (i < n && st < x)
        {
            mini = min(mini, arr[i]);
            tn++;

            st = tn * mini;
            i++;
        }
        if (st >= x)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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