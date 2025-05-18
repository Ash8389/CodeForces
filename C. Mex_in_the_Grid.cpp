#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int value = 0;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; ++i)
            grid[top][i] = value++;
        ++top;

        for (int i = top; i <= bottom; ++i)
            grid[i][right] = value++;
        --right;

        if (top <= bottom)
        {
            for (int i = right; i >= left; --i)
                grid[bottom][i] = value++;
            --bottom;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
                grid[i][left] = value++;
            ++left;
        }
    }

    int maxVal = n * n - 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            grid[i][j] = maxVal - grid[i][j];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << grid[i][j] << " ";
        cout << "\n";
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