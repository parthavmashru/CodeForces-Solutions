#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>cnt(m,0);
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            cnt[x%m]++;
        }
        ll ans=0;
        if(cnt[0])ans++;
        for(ll i=1;i<m-i;i++)
        {
            if(cnt[i]||cnt[m-i])
                ans+=max(0LL,abs(cnt[i]-cnt[m-i])-1)+1;
        }
        if(m%2==0&& cnt[m/2])ans++;
 
        cout<<ans<<endl;
    }
}