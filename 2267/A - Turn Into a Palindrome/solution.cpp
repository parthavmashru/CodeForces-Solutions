#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;char c;string s;cin>>n>>c>>s;
        int ans=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]==s[n-i-1])continue;
            if(s[i]==c || s[n-i-1]==c)ans++;
            else ans+=2;
        }
        cout<<ans<<endl;
    }
}