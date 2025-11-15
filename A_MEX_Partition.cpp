// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n;
//     cin >> n;

//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         st.insert(t);
//     }

//     int r = 0;

//     for (auto it : st)
//     {
//         if (it != r)
//         {
//             cout << r << "\n";
//             return;
//         }
//         r++;
//     }
//     cout << r << "\n";
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
    int n;
    cin >> n;
    vector<ll> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    vector<int> a(n);
    ll pre = 0;
    int curr = 0;

    for (int i = 0; i < n; ++i)
    {
        ll ss = b[i] - pre;
        pre = b[i];

        int p = i - ss;
        if (p < 0)
        {
            curr++;
            a[i] = curr;
        }
        else
        {
            a[i] = a[p];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << (i ? " " : "") << a[i];
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
