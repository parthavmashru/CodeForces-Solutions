#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            mp[bit_width((ull)x)-1]++;
        }
        ll ans=0;
        for(auto it:mp){
            if(it.second>1){
                ans+=it.second*(it.second-1)/2;
            }
        }
        cout<<ans<<endl;
    }
}