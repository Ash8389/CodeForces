//! THIS IS GIVING RUNTIME ERROR

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//     {
//         cout << "-1" << endl;
//         return;
//     }

//     int total_comb = pow(2, n);

//     for (int i = 1; i < total_comb; i += 2)
//     {
//         long long sum = 0;
//         string num = "";
//         for (int j = n - 1; j >= 0; j--)
//         {
//             if (i & (1 << j))
//             {
//                 num += '6';

//             }
//             else
//             {
//                 num += '3';
//             }
//         }

//         if (stoll(num) % 66 == 0)
//         {
//             cout << num << endl;
//             return;
//         }
//     }
//     cout << "-1" << endl;
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
    int n;
    cin >> n;

    if (n == 1 || n == 3)
    {
        cout << "-1" << endl;
        return;
    }

    string ans = "";

    if (n % 2 == 0)
    {
        ans += "66";
        for (int i = 2; i < n; i++)
        {
            ans = '3' + ans;
        }
    }
    else
    {
        ans += "36366";
        for (int i = 5; i < n; i++)
        {
            ans = '3' + ans;
        }
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