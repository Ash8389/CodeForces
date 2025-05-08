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

        vector<char> ch(n);
        long long upperdash = 0;
        long long lowerdash = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
            if (ch[i] == '_')
            {
                lowerdash++;
            }
            else
            {
                upperdash++;
            }
        }
        if (upperdash < 2 || lowerdash < 1)
        {
            cout << "0" << endl;
        }
        else
        {
            long long firsthalf = upperdash / 2;
            long long lasthalf = upperdash - firsthalf;

            cout << firsthalf * lasthalf * lowerdash << endl;
        }
    }

    return 0;
}
