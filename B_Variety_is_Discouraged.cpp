#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> mp;
        vector<int> in(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> in[i];
            mp[in[i]]++;
        }

        int st;
        int end;
        pair<int, int> ans;

        int len = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (mp[in[i]] == 1)
            {
                st = i;
                while (i <= n && mp[in[i]] == 1)
                    i++;
                end = i - 1;

                if ((end - st) + 1 > len)
                {
                    len = (end - st) + 1;
                    ans = make_pair(st, end);
                }
            }
        }

        if (len == INT_MIN)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans.first << " " << ans.second << endl;
        }
    }

    return 0;
}
