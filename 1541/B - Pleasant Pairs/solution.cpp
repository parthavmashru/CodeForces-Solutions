#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll i = 0; i < n; i++){
            ll x;cin>>x;
            v[i].first = x;v[i].second = i+1;
        }
        sort(v.begin(),v.end());
        ll cnt = 0;
        for (ll i = 0; i <n; i++)
        {  
            for (ll j = i+1; j < n; j++)
            {
                if(v[i].first*v[j].first>=2LL*n)break;
                if(v[i].first*v[j].first==v[i].second+v[j].second)cnt++;
            }
        }
            cout<<cnt<<endl;
    }
    
}