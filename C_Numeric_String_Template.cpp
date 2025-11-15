#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<string> s(m);

    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < m; i++)
    {
        int flag = 1;
        if (s[i].size() != n)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            unordered_map<int, char> num_char;
            unordered_map<char, int> char_num;

            for (int j = 0; j < n; j++)
            {
                if (num_char.find(a[j]) == num_char.end() && char_num.find(s[i][j]) == char_num.end())
                {
                    num_char[a[j]] = s[i][j];
                    char_num[s[i][j]] = a[j];
                }
                else if ((num_char.find(a[j]) == num_char.end() && char_num.find(s[i][j]) != char_num.end()) || (num_char.find(a[j]) != num_char.end() && char_num.find(s[i][j]) == char_num.end()))
                {
                    flag = 0;
                    break;
                }
                else if (num_char[a[j]] != s[i][j] || char_num[s[i][j]] != a[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
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