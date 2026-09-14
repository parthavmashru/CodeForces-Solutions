#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)
    {
        int n,m;
        cin>>n>>m;
 
        vector<ll>a(n);
        for(auto &x:a)
            cin>>x;
 
        priority_queue<ll> pq;
        ll sum=0;
        ll ans=LLONG_MIN;
 
        for(int i=0;i<n;i++)
        {
            if(i>=m-1)
                ans=max(ans,1LL*m*a[i]-sum);
 
            pq.push(a[i]);
            sum+=a[i];
 
            if((int)pq.size()>m-1)
            {
                sum-=pq.top();
                pq.pop();
            }
        }
 
        cout<<ans<<endl;
    }
}