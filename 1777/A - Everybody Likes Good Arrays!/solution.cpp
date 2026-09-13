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
        int n;
        cin>>n;
 
        vector<ll> a(n);
 
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        int ans=0;
 
        for(int i=1;i<n;i++)
        {
            if(a[i]%2==a[i-1]%2)
                ans++;
        }
 
        cout<<ans<<endl;
    }
}