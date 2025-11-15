#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first;
        cin >> vp[i].second;
    }

    int val = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int wgtt = 0;
        int valt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                wgtt += vp[j].first;
                valt += vp[j].second;
            }
        }
        if (wgtt <= w && valt > val)
        {
            val = valt;
        }
    }
    cout << val;
    return 0;
}