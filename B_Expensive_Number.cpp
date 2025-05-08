// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     long long n;
//     cin >> n;

//     int ans = 0;
//     int l = n % 10;
//     while (l == 0)
//     {
//         ans++;
//         n = n / 10;
//         l = n % 10;
//     }
//     n = n / 10;
//     while (n > 0)
//     {
//         l = n % 10;
//         n = n / 10;
//         if (l != 0)
//         {
//             ans++;
//         }
//     }
//     cout << ans << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string n;
    cin >> n;

    int ans = 0;
    int i = n.size() - 1;

    while (i > 0 && n[i] == '0')
    {
        if (n[i] == '0')
            ans++;
        i--;
    }
    for (int j = 0; j < i; j++)
    {
        if (n[j] != '0')
            ans++;
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
        solve();

    return 0;
}
