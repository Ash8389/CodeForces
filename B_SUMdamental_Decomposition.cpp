#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Create a list of indices sorted by a[i] in non-increasing order, and for ties, original order.
    vector<int> indices(n);
    iota(indices.begin(), indices.end(), 0);
    stable_sort(indices.begin(), indices.end(), [&](int i, int j)
                { return a[i] > a[j]; });

    int res = 0;
    int last_pos = -1;
    int current_val = -1;
    for (int i = 0; i < n;)
    {
        int val = a[indices[i]];
        if (val != current_val)
        {
            current_val = val;
            // Need to process all indices with this val
            int min_pos = indices[i];
            int max_pos = indices[i];
            int j = i + 1;
            while (j < n && a[indices[j]] == val)
            {
                min_pos = min(min_pos, indices[j]);
                max_pos = max(max_pos, indices[j]);
                ++j;
            }
            if (last_pos == -1)
            {
                // First group, no clone needed beyond initial
                last_pos = max_pos;
            }
            else
            {
                if (min_pos > last_pos)
                {
                    // Can be covered by moving right
                    last_pos = max_pos;
                }
                else
                {
                    // Need a new clone
                    res++;
                    last_pos = max_pos;
                }
            }
            i = j;
        }
    }
    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}