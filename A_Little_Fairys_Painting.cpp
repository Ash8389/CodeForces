#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    unordered_set<int> a;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        a.insert(t);
    }
    int i = a.size();
    while (!a.count(i))
    {
        i++;
    }
    cout << i << "\n";
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