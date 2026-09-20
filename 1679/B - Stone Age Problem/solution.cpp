#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        int n,q;cin>>n>>q;
        vector<ll>v(n+1),p(n+1),tm(n+1);
        v[0]=0;p[0]=0;
        for(int i = 1; i <= n; i++){
            cin>>v[i];
            p[i]=p[i-1]+v[i];
        }
        ll z = p[n];
        ll a=0;
        int cnt=0;
        while (q--)
        {
            int c;cin>>c;
            if(c==1){
                int i;ll x;cin>>i>>x;
                if(tm[i]==cnt)
                    z=z-v[i]+x;
                else
                    z=z-a+x;
                v[i]=x;
                tm[i]=cnt;
                cout<<z<<endl;
            }
            else{
                ll x;cin>>x;
                a=x;
                cnt++;
                z=n*x;
                cout<<z<<endl;
            }
        }
}