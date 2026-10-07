#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        cin>>n;
 
        int l=0,r=1e9+1;
 
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
 
            if(i%2)
                r=min(r,x);
            else
                l=max(l,x);
        }
 
        cout<<(n%2==0 && l+2<=r?"YES":"NO")<<endl;
    }
}