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

    unordered_set<int> st1;
    unordered_set<int> st2;
    st1.insert(a[0]);
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        st1.erase(a[i]);
        st2.insert(a[i]);

        if (st1.empty())
        {
            st1 = st2;
            cnt++;
        }
    }

    cout << cnt << "\n";
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