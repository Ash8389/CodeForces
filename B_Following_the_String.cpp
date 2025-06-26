#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> freq(n, 'a');

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        cout << freq[t];
        freq[t] += 1;
    }
    cout << endl;
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