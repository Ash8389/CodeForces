#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x = a[m];
        int cnt = 0;
        while (a[i] > 0 || x > 0)
        {
            int bit_x = x & 1;
            int bit_a = a[i] & 1;
            if (bit_x ^ bit_a)
            {
                cnt++;
            }
            a[i] = a[i] >> 1;
            x = x >> 1;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << "\n";

    return 0;
}