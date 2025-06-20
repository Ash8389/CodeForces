#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n + 1, vector<char>(m + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> rowfreq(n + 1, 0);
    vector<int> colfreq(m + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == '#')
            {
                rowfreq[i]++;
                colfreq[j]++;
            }
        }
    }

    int mxFreqRow = 0, mxIdxRow = -1;
    int mxFreqCol = 0, mxIdxCol = -1;

    for (int i = 1; i <= n; i++)
    {
        if (rowfreq[i] > mxFreqRow)
        {
            mxFreqRow = rowfreq[i];
            mxIdxRow = i;
        }
    }

    for (int j = 1; j <= m; j++)
    {
        if (colfreq[j] > mxFreqCol)
        {
            mxFreqCol = colfreq[j];
            mxIdxCol = j;
        }
    }
    cout << mxIdxRow << " " << mxIdxCol << endl;
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