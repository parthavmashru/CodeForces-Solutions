#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        ll n,x,y;cin>>n>>x>>y;
        map<pair<ll,ll>,ll> mp;ll ans=0;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            ll rx=a%x,ry=a%y;
            ans+=mp[{(x-rx)%x,ry}];
            mp[{rx,ry}]++;
        }
        cout<<ans<<endl;
    }
}