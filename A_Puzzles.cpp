#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;

    int ans = INT_MAX;
    while (j < m)
    {
        ans = min(arr[j] - arr[i], ans);
        i++;
        j++;
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}