#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        int need = ceil(abs(k) / float(p));

        if (need <= n)
        {
            cout << need << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
