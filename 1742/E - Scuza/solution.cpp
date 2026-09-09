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
        int n,q;cin>>n>>q;
        vector<ll>p(n+1),mx(n+1);
        for(int i = 1;i <= n;i++)
        {
            ll x;cin>>x;
            p[i]=p[i-1]+x;
            mx[i]=max(mx[i-1],x);
        }
        while(q--)
        {
            ll k;cin>>k;
            int pos=upper_bound(mx.begin()+1,mx.end(),k)-mx.begin()-1;
            cout<<p[pos]<<" ";
        }
        cout<<endl;
    }
}