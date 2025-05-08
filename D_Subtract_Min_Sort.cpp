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

        vector<int> in(n);
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
        }

        int pre = in[0];
        bool possible = 1;
        for (int i = 1; i < n; i++)
        {
            if (pre > in[i])
            {
                possible = 0;
                break;
            }
            else
            {
                pre = in[i] - pre;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
