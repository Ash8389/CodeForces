#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mp[temp]++;
        }
        int flag = 1;
        for (auto it : mp)
        {
            if (it.second < 2)
            {
                flag = 0;
                break;
            }
            if (it.second > 2)
            {
                mp[it.first + 1] += it.second - 2;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}