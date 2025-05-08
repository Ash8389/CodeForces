#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int one_zero = 0;
    int zero_one = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '0' && s[i] == '1')
        {
            zero_one++;
        }
        else if (s[i - 1] == '1' && s[i] == '0')
        {
            one_zero++;
        }
    }
    int ans;
    ans = zero_one + one_zero;

    if (s[0] == '1' && ans >= 1 || zero_one >= 2)
    {
        ans -= 1;
    }

    if (zero_one + one_zero >= 2)
    {
        ans -= 1;
    }
    if (s[0] == '1')
        ans++;
    ans += n;
    cout << ans << endl;
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

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int T;
// 	cin>>T;
// 	while(T--){
// 		int n,num=0;string s;
// 		cin>>n>>s;
// 		s='0'+s;
// 		for(int i=1;i<=n;i++)if(s[i]!=s[i-1])num++;
// 		if(num>2)num-=2;
// 		else if(num==2)num--;
// 		cout<<n+num<<endl;
// 	}
// 	return 0;
// }