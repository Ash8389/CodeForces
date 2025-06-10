#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int b = 1;
    int sum = 0;
    for (int k = 0; k < n - 1; k++)
    {
        int i = 0;
        int j = b;
        int mini = 0;
        while (j < n)
        {
            mini = min(mini, arr[i][j]);
            j++;
            i++;
        }
        sum += abs(mini);
        b++;
    }

    b = 1;
    for (int k = 0; k < n - 1; k++)
    {
        int i = b;
        int j = 0;
        int mini = 0;
        while (i < n)
        {
            mini = min(mini, arr[i][j]);
            j++;
            i++;
        }
        sum += abs(mini);
        b++;
    }

    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        mini = min(arr[i][i], mini);
    }
    sum += abs(mini);

    cout << sum << endl;
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