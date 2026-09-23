#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        vector<string>v={"00","25","50","75"};int ans=INT_MAX;
        for(auto x:v){
            int j=1,cnt=0;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]==x[j])
                {
                    j--;
                    if(j<0)break;
                }
                else cnt++;
            }
            if(j<0)ans=min(ans,cnt);
        }
        cout<<ans<<endl;
    }
}