// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     unordered_map<int, int> mp1;
//     unordered_map<int, int> mp2;

//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         cin >> temp;

//         mp1[temp]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         cin >> temp;

//         mp2[temp]++;
//     }

//     int sum1 = 0;
//     for (auto it : mp1)
//     {
//         if (mp2.find(it.first) == mp2.end())
//         {
//             sum1 += it.first * it.second;
//         }
//         else
//         {
//             int diff = it.second - mp2[it.first];
//             if (diff > 0)
//             {
//                 sum1 += diff * it.first;
//             }
//         }
//     }

//     int sum2 = 0;
//     for (auto it : mp2)
//     {
//         if (mp1.find(it.first) == mp1.end())
//         {
//             sum2 += it.first * it.second;
//         }
//         else
//         {
//             int diff = it.second - mp1[it.first];
//             if (diff > 0)
//             {
//                 sum2 += diff * it.first;
//             }
//         }
//     }
//     if ((sum1 + sum2) % k == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
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
typedef long long ll;

int cano(int x, int k)
{
    int r = x % k;
    int a = (k - r) % k;
    return min(r, a);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, int> f1, f2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        f1[cano(x, k)]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        f2[cano(x, k)]++;
    }

    if (f1 == f2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
