#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> min(m);
        vector<int> kin(k + 1);

        for (int i = 0; i < m; i++)
        {
            cin >> min[i];
        }
        int miss = -1;
        for (int i = 1; i <= k; i++)
        {
            cin >> kin[i];
            if (miss == -1 && kin[i] != i)
            {
                miss = i;
            }
        }
        if (miss == -1)
            miss = k + 1;

        if (n - 1 > k)
        {
            for (int i = 0; i < m; i++)
            {
                cout << 0;
            }
        }
        else if (n - 1 < k)
        {
            for (int i = 0; i < m; i++)
            {
                cout << 1;
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if (min[i] == miss)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
