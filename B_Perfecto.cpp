#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n)
{
    long long k = sqrt(n);

    if (k * k == n)
    {
        return true;
    }

    return false;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (isPerfectSquare((n * (n + 1)) / 2))
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<int> perm(n);
            perm = {2, 1};
            int k = 3;
            long long preSum = 3;
            bool possible = 1;

            while (k <= n)
            {
                if (!isPerfectSquare(preSum + k))
                {
                    // cout<<"IN1"<<endl;
                    perm.push_back(k);
                    preSum += k;
                    k++;
                }
                else if (k + 1 <= n)
                {
                    // cout<<"IN2"<<endl;
                    perm.push_back(k + 1);
                    perm.push_back(k);
                    preSum += k + 1 + k;
                    k += 2;
                }
                else
                {
                    // cout<<"p2"<<endl;
                    possible = 0;
                    break;
                }
            }
            if (possible)
            {
                for (auto it : perm)
                {
                    cout << it << " ";
                }
            }
            else
            {
                cout << "-1";
            }

            cout << endl;
        }
    }

    return 0;
}
