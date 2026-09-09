#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;vector<int>v(n);
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int ans=mp[v[0]],i=0;
        while (i<n)
        {
            int x=v[i];
            int j=i+mp[x];
            if(j==n)break;
            if(v[j]!=x+1)ans+=mp[v[j]];
            else if(mp[v[j]]>mp[x])ans+=mp[v[j]]-mp[x];
            i=j; 
        }
        cout<<ans<<endl;
    }
    
}