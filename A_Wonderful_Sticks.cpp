#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;

    cin >> n >> s;

    int maxi = n;
    int mini = 1;

    vector<int> ans;
    int i = n - 2;

    for (; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            ans.push_back(mini);
            mini++;
        }
        else
        {
            ans.push_back(maxi);
            maxi--;
        }
        if (i == 0)
        {
            if (s[i] == '<')
            {
                ans.push_back(maxi);
            }
            else
            {
                ans.push_back(mini);
            }
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
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