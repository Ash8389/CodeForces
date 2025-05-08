#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        long long sum = 0;
        vector<long long> in(n);
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
            sum += in[i];
        }

        if (sum % n == 0 && sum / n == x)
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