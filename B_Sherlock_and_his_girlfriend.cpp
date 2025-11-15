#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<bool> isPrime(n + 2, true);

    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime[i])
        {
            for (ll j = 1LL * i * i; j <= n + 1; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << (n > 2 ? 2 : 1) << "\n";
    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime[i])
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }

    return 0;
}