#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mt(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mt[i][j];
        }
    }

    int delr[] = {-1, 0, 1, 0};
    int delc[] = {0, 1, 0, -1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int maxi = 0;
            int flag = 1;
            for (int k = 0; k < 4; k++)
            {
                int nr = i + delr[k];
                int nc = j + delc[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m)
                {
                    if (mt[nr][nc] >= mt[i][j])
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        maxi = max(maxi, mt[nr][nc]);
                    }
                }
            }
            if (flag)
            {
                mt[i][j] = maxi;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mt[i][j] << " ";
        }
        cout << endl;
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