#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> in(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> in[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            sort(in[i].begin(), in[i].end());
        }

        bool possible = 1;
        vector<pair<int, int>> pr;

        for (int i = 0; i < n; i++)
        {
            pr.push_back({in[i][0], i});

            for (int j = 0; j < m - 1; j++)
            {
                if (in[i][j] + n != in[i][j + 1])
                {
                    possible = 0;
                    break;
                }
            }
        }

        if (possible)
        {
            sort(pr.begin(), pr.end(), [](const pair<int, int> a, const pair<int, int> b)
                 { return a.first < b.first; });
            for (int i = 0; i < n; i++)
            {
                cout << pr[i].second + 1 << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }

    return 0;
}