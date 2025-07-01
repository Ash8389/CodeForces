#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i > 0 && arr.back() == temp)
        {
            continue;
        }
        arr.push_back(temp);
    }

    int i = 0;
    int cnt = arr.size();
    while (i < arr.size() - 1)
    {
        if (arr[i] + 1 == arr[i + 1])
        {
            cnt--;
            i += 2;
        }
        else
        {
            i++;
        }
    }

    cout << cnt << endl;
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