#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int ans=1e9;
        for(char c='a';c<='z';c++)
        {
            int i=0,j=n-1,cnt=0;
            bool ok=true;
            while(i<j)
            {
                if(s[i]==s[j])
                {
                    i++;j--;
                }
                else if(s[i]==c)
                {
                    i++;cnt++;
                }
                else if(s[j]==c)
                {
                    j--;cnt++;
                }
                else{
                    ok=false;break;
                }
            }
            if(ok) ans=min(ans,cnt);
        }
        if(ans==1e9) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}