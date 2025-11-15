#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        st.insert(temp);
    }

    if (st.size() > 2 || st.count(0))
    {
        cout << "NO" << endl;
        return;
    }

    if ((st.size() == 2 && *st.begin() == -1) || st.size() == 1)
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