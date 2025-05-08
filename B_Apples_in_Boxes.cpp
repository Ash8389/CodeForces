#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    int maxi = INT_MIN;
    int mini = INT_MAX;

    ll sum = 0;
    int no_maxi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += (ll)arr[i];

        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (maxi == arr[i])
        {
            no_maxi++;
        }
    }

    if (((maxi - 1) - mini) > k || (((maxi - 1) - mini == k) && (no_maxi > 1)))
    {
        cout << "Jerry" << endl;
        return;
    }

    if (sum % (ll)2 == 1)
    {
        cout << "Tom" << endl;
    }
    else
    {
        cout << "Jerry" << endl;
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