#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    long long x;
    cin >> n >> k >> x;

    vector<long long> arr(n);

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (x > sum * k)
    {
        cout << 0 << endl;
        return;
    }

    long long rem = x % sum;
    long long cov = x / sum;

    if (rem == 0)
    {
        cov--;
        rem = sum;
    }
    long long ans = n * (k - cov);

    long long sufSum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sufSum += arr[i];
        if (sufSum >= rem)
        {
            break;
        }
        ans--;
    }

    cout << ans << endl;
    return;
}

// TC:
// 7
// 5 3 10
// 3 4 2 1 5
// 15 97623 1300111
// 105 95 108 111 118 101 95 118 97 108 111 114 97 110 116
// 1 100000 1234567891011
// 1
// 1 1 1
// 1
// 1 1 1
// 2
// 2 1 2
// 1 1
// 2 1 5
// 2 1

// OP:
// 12
// 1452188
// 0
// 1
// 1
// 1
// 0

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