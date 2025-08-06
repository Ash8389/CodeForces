#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int sum = 0;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];

        if (a[i] == 0)
        {
            cnt0++;
        }
        else if (a[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    int diff = k - sum;

    if (diff < 0 || diff == 1)
    {
        for (int i = 0; i < cnt0; i++)
        {
            if (i != 0)
            {
                cout << " ";
            }
            cout << 0;
        }
        for (int i = 0; i < cnt2; i++)
        {
            cout << " ";
            cout << 2;
        }
        for (int i = 0; i < cnt1; i++)
        {
            cout << " ";
            cout << 1;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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