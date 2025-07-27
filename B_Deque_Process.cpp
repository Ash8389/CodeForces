#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ptr1 = 0;
    int ptr2 = n - 1;
    int i = 0;
    string ans = "";
    while (i < n)
    {
        if (i % 2 == 0)
        {
            if (a[ptr1] > a[ptr2])
            {
                ans += 'L';
                ptr1++;
            }
            else
            {
                ans += 'R';
                ptr2--;
            }
        }
        else
        {
            if (a[ptr1] < a[ptr2])
            {
                ans += 'L';
                ptr1++;
            }
            else
            {
                ans += 'R';
                ptr2--;
            }
        }
        i++;
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