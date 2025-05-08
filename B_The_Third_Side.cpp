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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
            sum += in[i];
        }

        cout << (sum - (n - 1)) << endl;
    }

    return 0;
}