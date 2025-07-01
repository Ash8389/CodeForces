#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    priority_queue<long long> pq;
    unordered_map<long long, long long> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pq.push(arr[i]);
        mp[arr[i]]++;
    }
    long long sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        while (mp[pq.top()] <= 0)
        {
            pq.pop();
        }
        if (i == n - 1)
        {
            cout << pq.top() << " ";
        }
        else
        {
            cout << sum + pq.top() << " ";
        }
        sum += arr[i];
        mp[arr[i]]--;
    }

    cout << endl;
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
// int t,n,qm[200020];
// long long qh[200020];
// int main(){
// 	cin.tie(0)->sync_with_stdio(0);
// 	cout.tie(0);
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		for(int i=1;i<=n;i++){
// 			int _;
// 			cin>>_;
// 			qm[i]=max(qm[i-1],_);
// 			qh[i]=qh[i-1]+_;
// 		}
// 		for(int i=1;i<=n;i++){
// 			cout<<qh[n]-qh[n-i+1]+qm[n-i+1]<<' ';
// 		}
// 		cout<<'\n';
// 	}

// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve()
// {
// 	ll n,i,s=0,m=0ll;
// 	cin>>n;
// 	vector<ll>v(n),t(n),p(n);
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 		m=max(m,v[i]);
// 		t[i]=m;

// 	}
// 	ll x,k=n-1;
// 	for(i=n-1;i>=0;i--)
// 	{
// 		s=s+v[i];
// 		x=s-v[i]+t[i];
// 		cout<<x<<" ";
// 	}
// 	cout<<"\n";
// }
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 		solve();
// }
