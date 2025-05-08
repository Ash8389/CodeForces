#include <bits/stdc++.h>
using namespace std;

bool isPrime(const string &s)
{
    if (s.length() <= 18)
    {
        long long num = stoll(s);
        if (num <= 1)
            return false;
        if (num == 2)
            return true;
        if (num % 2 == 0)
            return false;
        for (long long i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    return false;
}

void solve()
{
    string x;
    int k;
    cin >> x >> k;
    string y = "";
    for (int i = 0; i < k; ++i)
    {
        y += x;
    }

    if (isPrime(y))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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