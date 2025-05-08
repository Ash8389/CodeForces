#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int cnt = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i - 1] <= arr[i])
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
    }
    ans = max(ans, cnt);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}