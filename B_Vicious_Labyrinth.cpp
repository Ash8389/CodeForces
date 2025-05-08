
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i != n - 1)
                {
                    cout << n - 1 << " ";
                }
                else
                {
                    cout << n << " ";
                }
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i != n)
                {
                    cout << n << " ";
                }
                else
                {
                    cout << n - 1 << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}