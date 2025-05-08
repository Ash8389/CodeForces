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

        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
            if (in[i] > 0)
            {
                sum += in[i];
            }
        }
        long long ans = sum;
        for (int i = n - 1; i >= 0; i++)
        {
            sum -= in[i];
            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}
