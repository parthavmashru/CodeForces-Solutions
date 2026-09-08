#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        ll x,y,k;cin>>x>>y>>k;
        ll d=y-x;
        ll i = 0,ans=0;
        while(i+x<=d && i<k){
            ans+=d%(x+i);
            i++;
        }
        ans+=(k-i)*d;
        cout<<ans<<endl;
    }
}