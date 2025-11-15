#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    int j = 0;
    int sum = 0;

    while (j < k)
    {
        sum += a[j];
        j++;
    }

    int minSum = sum;
    int idx = 1;

    while (j < n)
    {
        sum -= a[i];
        sum += a[j];
        i++;
        j++;

        if (sum < minSum)
        {
            idx = i + 1;
            minSum = sum;
        }
    }

    cout << idx;

    return 0;
}