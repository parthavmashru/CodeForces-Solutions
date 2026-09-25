#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
    ll n;
    ll x;
    cin>>n>>x;
    vector<ll>a(n),p(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    p[0]=a[0];
    for(int i=1;i<n;i++)p[i]=p[i-1]+a[i];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]>x)break;
        ans+=(x-p[i])/(i+1)+1;
    }
    cout<<ans<<endl;
    }
}