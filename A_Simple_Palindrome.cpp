#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> freq(5, 0);

    for (int i = 0; i < n; i++)
    {
        freq[i % 5]++;
    }
    vector<char> ch(5);
    ch[0] = 'a', ch[1] = 'e', ch[2] = 'i', ch[3] = 'o', ch[4] = 'u';

    for (int i = 0; i < 5; i++)
    {
        while (freq[i] != 0)
        {
            cout << ch[i];
            freq[i]--;
        }
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