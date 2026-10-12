#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k,x;cin>>n>>k>>x;vector<ll>v(n);
	for (int i = 0; i < n; i++)cin>>v[i];
	sort(v.begin(),v.end());
	vector<ll> diff;
	for(int i = 0; i < n-1; i++)
	{
		if (v[i+1]-v[i]>x)
		{
			diff.push_back(v[i+1]-v[i]);
		}
    }
	sort(diff.begin(),diff.end());
	int ans=diff.size()+1;
	for (auto d : diff)
	{
		ll val = (d/x)+(d%x!=0)-1;
		if (k>=val)
		{
			ans--;k-=val;
		}
	}
	cout<<ans<<endl;
}