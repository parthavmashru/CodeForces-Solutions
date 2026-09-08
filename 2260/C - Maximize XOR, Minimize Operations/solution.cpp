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
        int x,y;cin>>x>>y;
        int d = x+y;
        int i=1;int ans=0;
        while (i<=d)
        {
            i*=2;
        }
        i=i/2;
        while(i)
        {
            if((d/i)%2==1 && ans+i<=x)
                ans+=i;
            i/=2;
        }
        cout<<d<<" "<<x-ans<<endl;
    }
}