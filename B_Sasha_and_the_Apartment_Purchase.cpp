#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // Precompute prefix sums
        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + a[i];
        }

        ll min_f = LLONG_MAX;
        map<ll, int> count_min_f;

        for (int i = 0; i < n; i++)
        {
            ll x = a[i];

            // Total distance =
            // (number of left elements) * x - sum of left elements
            // + sum of right elements - (number of right elements) * x

            ll left = i;
            ll right = n - i - 1;
            ll sum_left = prefix[i];
            ll sum_right = prefix[n] - prefix[i + 1];

            ll f_x = left * x - sum_left + sum_right - right * x;

            if (f_x < min_f)
            {
                min_f = f_x;
                count_min_f.clear();
                count_min_f[x] = 1;
            }
            else if (f_x == min_f)
            {
                count_min_f[x]++;
            }
        }

        cout << count_min_f.size() << '\n';
    }
}
