#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int ans = 0;
    for (int j = 2; j <= n; j++)
    {
        int primeCnt = 0;
        for (int i = 2; i <= j; i++)
        {
            if (j % i == 0 && isPrime[i])
            {
                primeCnt++;
            }
        }
        if (primeCnt == 2)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}