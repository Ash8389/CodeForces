#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];

    if (n == 2)
    {
        cout << "Bob" << endl;
        return;
    }
    int backPtr1 = n - 1;
    int backPtr2 = n - 1;
    int frontPtr1 = 0;
    int frontPtr2 = 0;

    while (frontPtr1 <= backPtr1 && frontPtr2 < backPtr2)
    {
        if (((A[frontPtr1] != B[frontPtr2]) && (A[frontPtr1] != B[backPtr2])) || ((A[backPtr1] != B[backPtr2]) && (B[frontPtr2] != A[backPtr1])))
        {
            cout << "Alice" << endl;
            return;
        }
        else if (A[frontPtr1] == B[frontPtr2])
        {
            frontPtr1++;
            frontPtr2++;
        }
        else if (A[frontPtr1] == B[backPtr2])
        {
            frontPtr1++;
            backPtr2--;
        }
        else if (A[backPtr1] == B[backPtr2])
        {
            backPtr1--;
            backPtr2--;
        }
        else if (A[backPtr1] == B[frontPtr2])
        {
            frontPtr2++;
            backPtr1--;
        }
    }

    cout << "Bob" << endl;
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