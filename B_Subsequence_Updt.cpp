// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, l, r;
//     cin >> n >> l >> r;
//     l--;
//     r--;
//     vector<ll> l_to_r;
//     vector<ll> left;
//     vector<ll> right;

//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         cin >> temp;

//         if (i < l)
//         {
//             left.push_back(temp);
//         }
//         else if (i > r)
//         {
//             right.push_back(temp);
//         }
//         else
//         {
//             l_to_r.push_back(temp);
//         }
//     }

//     sort(left.begin(), left.end());
//     sort(right.begin(), right.end());
//     sort(l_to_r.begin(), l_to_r.end());

//     vector<ll> temp(l_to_r.begin(), l_to_r.end());

//     int i = 0;
//     int j = l_to_r.size() - 1;

//     while (i < left.size() && j >= 0 && l_to_r[j] >= left[i])
//     {
//         swap(l_to_r[j], left[i]);
//         i++;
//         j--;
//     }
//     long long sum = accumulate(l_to_r.begin(), l_to_r.end(), 0LL);

//     long long ans = sum;

//     i = 0;
//     j = l_to_r.size() - 1;

//     while (i < right.size() && j >= 0 && temp[j] >= right[i])
//     {
//         swap(temp[j], right[i]);
//         i++;
//         j--;
//     }

//     sum = accumulate(temp.begin(), temp.end(), 0LL);

//     ans = min(ans, sum);

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
typedef long long ll;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    l--;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(a.begin(), a.begin() + r);
    vector<int> c(a.begin() + l, a.end());

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int seqLen = r - l;

    ll leftSum = accumulate(b.begin(), b.begin() + seqLen, 0LL);
    ll rightSum = accumulate(c.begin(), c.begin() + seqLen, 0LL);

    cout << min(leftSum, rightSum) << endl;
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