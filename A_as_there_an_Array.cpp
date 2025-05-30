#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n - 2; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 4; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1)
        {
            cout << "NO" << endl;
            return;
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