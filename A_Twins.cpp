#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    int coin = 0;
    int money = 0;
    for (int i = 0; i < n; i++)
    {
        coin++;
        money += arr[i];
        sum -= arr[i];

        if (sum < money)
        {
            break;
        }
    }

    cout << coin << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}