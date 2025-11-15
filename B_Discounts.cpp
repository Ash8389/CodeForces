// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n), b(k);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cin >> b[i];
//     }

//     sort(a.rbegin(), a.rend());
//     sort(b.begin(), b.end());

//     int i = 0;
//     int j = 0;
//     ll cost = 0;
//     while (i < n && j < k)
//     {
//         int t = b[j];
//         while (i < n && t)
//         {
//             cost += a[i];
//             i++;
//             t--;
//         }
//         if (t == 0)
//         {
//             cost -= a[i - 1];
//         }
//         j++;
//     }
//     while (i < n)
//     {
//         cost += a[i];
//         i++;
//     }
//     cout << cost << "\n";
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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {

        cin >> b[i];
    }

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    ll cost = 0;
    int i = 0, j = 0;

    while (j < k && i < n)
    {
        int t = b[j];
        if (i + t > n)
        {
            j++;
            continue;
        }
        for (int c = 0; c < t; c++)
        {
            cost += a[i];
            i++;
        }

        cost -= a[i - 1];
        j++;
    }
    while (i < n)
    {
        cost += a[i];
        i++;
    }

    cout << cost << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
