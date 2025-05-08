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

        vector<int> have(n);
        vector<int> req(n);

        vector<int> extra(n);

        for (int i = 0; i < n; i++)
        {
            cin >> have[i];
        }
        int needIdx = -1;
        int needfor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> req[i];
            extra[i] = have[i] - req[i];

            if (extra[i] < 0)
            {
                needIdx = i;
                needfor++;
            }
        }

        int flg = 0;

        if (needfor > 1)
        {
            flg = 1;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((needIdx != -1) && (i != needIdx))
                    if (abs(extra[needIdx]) > extra[i])
                    {
                        flg = 1;
                    }
            }
        }

        if (flg)
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
