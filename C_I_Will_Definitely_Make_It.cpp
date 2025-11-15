#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int kH = h[k - 1];
    if (kH == *max_element(h.begin(), h.end()))
    {
        cout << "YES" << endl;
        return;
    }

    set<int> st(h.begin(), h.end());
    h = vector<int>(st.begin(), st.end());

    int pos = lower_bound(h.begin(), h.end(), kH) - h.begin();

    for (int i = pos; i + 1 < h.size(); i++)
    {
        if (h[i + 1] - h[i] > kH)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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