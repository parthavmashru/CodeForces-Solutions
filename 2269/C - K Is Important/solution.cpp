#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n,k;
        cin>>n>>k;
 
        vector<ll> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
 
        int siz=n;
        ll ans=0;
        while(siz>=k){
            if(a[k-1]>=a[siz-k]){
                ans+=a[k-1];
                a.erase(a.begin()+(k-1));
            }
            else{
                ans+=a[siz-k];
                a.erase(a.begin()+(siz-k));
            }
            siz--;
        }
        cout<<ans<<endl;
    }
}