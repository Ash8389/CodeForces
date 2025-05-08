#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll GetValue(ll n, ll x, ll y)
{

    if (n == 1)
    {
        if (x == 1 && y == 1)
            return 1;
        if (x == 1 && y == 2)
            return 4;
        if (x == 2 && y == 1)
            return 3;
        if (x == 2 && y == 2)
            return 2;
    }

    ll half = ll(1) << (n - 1);
    ll block = half * half;

    if (x <= half && y <= half)
    {
        return GetValue(n - 1, x, y);
    }
    else if (x > half && y > half)
    {
        ll delx = x - half;
        ll dely = y - half;
        return block + GetValue(n - 1, delx, dely);
    }
    else if (x > half && y <= half)
    {
        ll delx = x - half;
        ll dely = y;
        return 2 * block + GetValue(n - 1, delx, dely);
    }
    else
    {
        ll delx = x;
        ll dely = y - half;
        return 3 * block + GetValue(n - 1, delx, dely);
    }
}
pair<ll, ll> GetCod(ll n, ll val)
{

    if (n == 1)
    {

        if (val == 1)
        {
            return {1, 1};
        }
        else if (val == 2)
        {
            return {2, 2};
        }
        else if (val == 3)
        {
            return {2, 1};
        }
        else
        {
            return {1, 2};
        }
    }

    ll half = ll(1) << (n - 1);
    ll block = half * half;

    if (val <= block)
    {
        pair<ll, ll> del = GetCod(n - 1, val);
        ll px = del.first;
        ll py = del.second;
        return {px, py};
    }
    else if (val <= 2 * block)
    {
        pair<ll, ll> del = GetCod(n - 1, val - block);
        ll px = del.first;
        ll py = del.second;
        return {half + px, half + py};
    }
    else if (val <= 3 * block)
    {
        pair<ll, ll> del = GetCod(n - 1, val - (block * 2));
        ll px = del.first;
        ll py = del.second;
        return {half + px, py};
    }
    else
    {
        pair<ll, ll> del = GetCod(n - 1, val - (block * 3));
        ll px = del.first;
        ll py = del.second;
        return {px, half + py};
    }
}
void solve()
{
    ll n, q;
    cin >> n >> q;

    ll x, y;
    string s;

    for (int i = 0; i < q; i++)
    {
        cin >> s;
        if (s == "->")
        {
            cin >> x >> y;
            cout << GetValue(n, x, y) << endl;
        }
        else
        {
            cin >> x;
            pair<ll, ll> del = GetCod(n, x);
            cout << del.first << " " << del.second << endl;
        }
    }
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