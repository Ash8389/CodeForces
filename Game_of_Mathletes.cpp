#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        unordered_map<int, int> mpp;

        vector<int> in(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
            int need = k - in[i];
            if ((mpp.find(need) != mpp.end()) && (mpp[need] > 0))
            {
                cnt++;
                mpp[need]--;
            }
            else
            {
                mpp[in[i]]++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}