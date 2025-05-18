#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    int zero = 3;
    int one = 1;
    int three = 1;
    int two = 2;
    int five = 1;

    for (auto it : arr)
    {
        if (it == 0)
        {
            zero--;
        }
        else if (it == 1)
        {
            one--;
        }
        else if (it == 2)
        {
            two--;
        }
        else if (it == 3)
        {
            three--;
        }
        else if (it == 5)
        {
            five--;
        }
        // cout << zero << one << two << three << five << endl;
        cnt++;
        if (zero <= 0 && one <= 0 && two <= 0 && three <= 0 && five <= 0)
        {
            cout << cnt << endl;
            return;
        }
    }

    cout << 0 << endl;
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