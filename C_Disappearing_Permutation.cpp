#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    vector<int> done(n + 1, -1);
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int k = b[i];
        int j = a[k];
        int temp;

        if (done[k] == -1)
            ans++;
        done[j] = j;

        while (j != k && done[k] == -1)
        {
            ans++;
            temp = a[j];
            j = temp;
            done[j] = j;
        }
        cout << ans << " ";
    }
    cout << endl;
}

// TC :
// 3
// 3
// 1 2 3
// 3 2 1
// 5
// 4 5 3 1 2
// 4 5 1 3 2
// 7
// 4 3 1 2 7 5 6
// 1 2 3 4 5 6 7

// OP:
// 1 2 3
// 2 4 4 5 5
// 4 4 4 4 7 7 7

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