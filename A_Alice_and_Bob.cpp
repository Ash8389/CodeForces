// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, a;
//     cin >> n >> a;

//     vector<int> m(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> m[i];
//     }

//     int AP1 = 0;
//     int BP1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (abs(a - m[i]) <= abs(a + 1 - m[i]))
//         {
//             AP1++;
//         }
//         else
//         {
//             BP1++;
//         }
//     }
//     int AP2 = 0;
//     int BP2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (abs(a - m[i]) <= abs(a - 1 - m[i]))
//         {
//             AP2++;
//         }
//         else
//         {
//             BP2++;
//         }
//     }
//     if (BP1 > BP2)
//     {
//         cout << a + 1 << "\n";
//     }
//     else
//     {
//         cout << a - 1 << "\n";
//     }
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
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> pos;
        for (int i = 0; i < n; i++)
            if (s[i] != 'I')
                pos.push_back(i);

        if (pos.empty())
        {
            cout << n * k - 1 << '\n';
            continue;
        }

        int r = pos.size();
        ll in = 0;
        for (int i = 0; i + 1 < r; i++)
        {
            int a = pos[i], b = pos[i + 1];
            in += (b - a - 1) + (s[a] == s[b]);
        }

        int a = pos[r - 1], b = pos[0];
        ll wp = (n - 1 - a) + b + (s[a] == s[b]);

        ll ld = pos[0];
        ll tl = (n - 1) - pos[r - 1];

        ll ans = k * in + (k - 1) * wp + ld + tl;
        cout << ans << '\n';
    }
}
