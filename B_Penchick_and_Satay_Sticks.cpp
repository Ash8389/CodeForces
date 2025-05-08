#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n - 1;)
    {
        if (arr[i] != i && abs(arr[i] - arr[i + 1]) != 1)
        {
            cout << "NO" << endl;
            return;
        }
        else if (arr[i] != i && abs(arr[i] - arr[i + 1]) == 1)
        {
            if (arr[i + 1] != i)
            {
                cout << "NO" << endl;
                return;
            }
            i += 2;
        }
        else
        {
            i++;
        }
    }

    cout << "YES" << endl;
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