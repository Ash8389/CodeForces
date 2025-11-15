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

    if (n == 1)
    {
        cout << "YES\n";
        return;
    }

    unordered_set<int> st;
    for (auto it : a)
    {
        if (st.count(it))
        {
            cout << "YES\n";
            return;
        }
        st.insert(it);
    }
    cout << "NO\n";
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