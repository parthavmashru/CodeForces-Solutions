#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll ans = 1, mod = 1e9+7;
        for(int i = 0; i < k; i++){
            ans = (ans*n)%mod;
        }
        cout<<ans<<endl;
    }
}