#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans = "";
    bool f = false;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '0' && !f) || (i == s.size() - 1 && !f))
        {
            f = true;
            continue;
        }
        ans += s[i];
    }

    cout << ans << "\n";

    return 0;
}