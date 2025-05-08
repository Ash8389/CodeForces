#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> odd;
    vector<long long> even;
    long long oddSum = 0;
    long long evenSum = 0;
    int maxOdd = 0;
    int maxEven = 0;

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp % 2 == 0)
        {
            even.push_back(temp);
            evenSum += temp;
            maxEven = max(maxEven, temp);
        }
        else
        {
            odd.push_back(temp);
            oddSum += temp;
            maxOdd = max(maxOdd, temp);
        }
    }

    if (even.size() == 0)
    {
        ans = maxOdd;
    }
    else if (odd.size() == 0)
    {
        ans = maxEven;
    }
    else
    {
        ans += evenSum;
        ans += odd.size() > 1 ? (oddSum - (odd.size() - 1)) : oddSum;
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}