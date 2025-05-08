#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int> arr, int x, int k)
{
    int cur_max = 0;
    int bl = 0;
    vector<int> cover(x + 1, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < x)
        {
            cover[arr[i]] = 1;
        }
        while (cover[cur_max])
        {
            cur_max++;
        }
        if (cur_max >= x)
        {
            cur_max = 0;
            bl++;
            fill(cover.begin(), cover.end(), 0);
        }
    }
    if (bl >= k)
        return true;
    return false;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int h = n;

    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        bool valid = isValid(arr, mid, k);

        if (valid)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << ans << endl;
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