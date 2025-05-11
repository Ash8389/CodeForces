#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    string dir;
    cin >> dir;

    int x1 = 0;
    int y1 = 0;

    for (int i = 0; i < 10000; i++)
    {

        if (dir[i % n] == 'N')
            y1++;
        else if (dir[i % n] == 'E')
            x1++;
        else if (dir[i % n] == 'S')
            y1--;
        else if (dir[i % n] == 'W')
            x1--;

        if (x == x1 && y == y1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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