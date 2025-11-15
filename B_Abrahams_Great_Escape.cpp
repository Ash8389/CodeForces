// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     if (k % 2 != 0)
//     {
//         cout << "NO" << "\n";
//         return;
//     }

//     if (n % 2 == 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n - 1; j++)
//             {
//                 cout << (j % 2 == 0 ? 'R' : 'L');
//             }
//             cout << (i % 2 == 0 ? 'D' : 'U');
//         }
//     }
//     else
//     {
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     int rem = n * n - k;

//     if (rem & 1)
//     {
//         cout << "NO\n";
//         return;
//     }

//     cout << "YES\n";

//     int fil = 0;
//     vector<vector<char>> mtx(n, vector<char>(n, '.'));

//     for (int j = 0; j < n && fil < k; j++)
//     {
//         for (int i = 0; i < n && fil < k; i++)
//         {
//             mtx[i][j] = 'U';
//             fil++;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (mtx[i][j] == '.')
//             {
//                 if (j + 1 < n && mtx[i][j + 1] == '.')
//                 {
//                     mtx[i][j] = 'R';
//                     mtx[i][j + 1] = 'L';
//                     j++;
//                 }
//                 else if (i + 1 < n && mtx[i + 1][j] == '.')
//                 {
//                     mtx[i][j] = 'D';
//                     mtx[i + 1][j] = 'U';
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << mtx[i][j];
//         }
//         cout << "\n";
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         int rem = n * n - k;
//         if (rem % 2)
//         {
//             cout << "NO\n";
//             continue;
//         }

//         cout << "YES\n";
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (cnt < k)
//                     cout << 'U';
//                 else
//                 {
//                     // for remaining cells, make R/L pairs
//                     if ((j % 2) == 0)
//                         cout << 'R';
//                     else
//                         cout << 'L';
//                 }
//                 cnt++;
//             }
//             cout << "\n";
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

long long mod_p(long long b, long long e)
{
    long long res = 1;
    b %= MOD;
    while (e)
    {
        if (e & 1)
        {
            res = (res * b) % MOD;
        }
        b = (b * b) % MOD;
        e >>= 1;
    }
    return res;
}

class uniF
{
    vector<int> par, size, minIdx;

public:
    uniF(int n) : par(n), size(n, 1), minIdx(n)
    {
        iota(par.begin(), par.end(), 0);
        iota(minIdx.begin(), minIdx.end(), 0);
    }

    int rootF(int x)
    {
        return par[x] == x ? x : par[x] = rootF(par[x]);
    }

    void merge(int u, int v)
    {
        int ru = rootF(u), rv = rootF(v);
        if (ru == rv)
        {
            return;
        }
        if (size[ru] < size[rv])
        {
            swap(ru, rv);
        }
        par[rv] = ru;
        size[ru] += size[rv];
        minIdx[ru] = min(minIdx[ru], minIdx[rv]);
    }

    int getSize(int x) { return size[rootF(x)]; }
    int getMinIdx(int x) { return minIdx[rootF(x)]; }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &v : a)
        cin >> v;

    vector<int> del(n), forc(n, -1);
    for (int i = 1; i < n; ++i)
    {
        del[i] = a[i] - a[i - 1] + 1;
        if (del[i] < 0 || del[i] > 2)
        {
            cout << 0 << "\n";
            return;
        }
    }

    for (int i = 1; i < n; ++i)
    {
        if (del[i] == 0)
        {
            if ((forc[i - 1] != -1 && forc[i - 1] != 0) || (forc[i] != -1 && forc[i] != 0))
            {
                cout << 0 << "\n";
                return;
            }
            forc[i - 1] = forc[i] = 0;
        }
        else if (del[i] == 2)
        {
            if ((forc[i - 1] != -1 && forc[i - 1] != 1) || (forc[i] != -1 && forc[i] != 1))
            {
                cout << 0 << "\n";
                return;
            }
            forc[i - 1] = forc[i] = 1;
        }
    }

    uniF uf(n);
    for (int i = 1; i < n; i++)
        if (del[i] == 1)
        {
            uf.merge(i - 1, i);
        }

    vector<int> compVal(n, -1), compPos(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (forc[i] != -1)
        {
            int r = uf.rootF(i);
            if (compVal[r] != -1)
            {
                int dist = abs(i - compPos[r]);
                int exp = (dist % 2 == 0) ? compVal[r] : 1 - compVal[r];
                if (exp != forc[i])
                {
                    cout << 0 << "\n";
                    return;
                }
            }
            else
            {
                compVal[r] = forc[i];
                compPos[r] = i;
            }
        }
    }

    vector<int> freeChain;
    vector<bool> seen(n, false);
    long long fixL = 0;
    int Fchain = -1;
    int r0 = uf.rootF(0);

    for (int i = 0; i < n; i++)
    {
        int r = uf.rootF(i);
        if (seen[r])
            continue;
        seen[r] = true;
        int len = uf.getSize(r);
        if (compVal[r] != -1)
        {
            int start = ((compPos[r] - uf.getMinIdx(r)) % 2 == 0) ? compVal[r] : 1 - compVal[r];
            fixL += (start == 1) ? (len + 1) / 2 : len / 2;
        }
        else
        {
            if (r == r0)
            {
                Fchain = len;
            }
            else
            {
                freeChain.push_back(len);
            }
        }
    }

    long long odd = 0, even = 0, sumHalf = 0;
    for (auto len : freeChain)
    {
        if (len % 2)
            odd++;
        else
            even++;
        sumHalf += len / 2;
    }

    auto comb = [&](long long n, long long r) -> long long
    {
        if (r < 0 || r > n)
            return 0;
        long long res = 1;
        for (long long i = 1; i <= r; i++)
        {
            res = res * (n - i + 1) % MOD;
            res = res * mod_p(i, MOD - 2) % MOD;
        }
        return res;
    };

    long long total = 0;
    long long powE = mod_p(2, even);

    if (Fchain == -1)
    {
        int r = r0;
        int c1 = ((0 - compPos[r]) % 2 == 0) ? compVal[r] : 1 - compVal[r];
        long long target = c1 + n - a[0] - fixL - sumHalf;
        total = comb(odd, target) * powE % MOD;
    }
    else
    {
        long long l0 = Fchain / 2;
        long long l1 = (Fchain + 1) / 2;
        long long k0 = n - a[0] - fixL - l0 - sumHalf;
        long long k1 = 1 + n - a[0] - fixL - l1 - sumHalf;
        total = (comb(odd, k0) * powE % MOD + comb(odd, k1) * powE % MOD) % MOD;
    }

    cout << total % MOD << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
