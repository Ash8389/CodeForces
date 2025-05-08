#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    cout << st.size() << endl;
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