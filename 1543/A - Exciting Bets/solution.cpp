#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        ll a,b;cin>>a>>b;ll d=abs(a-b);
        if(d==0)
        {
            cout<<"0 0"<<endl;continue;
        }
        ll x=a%d;
        cout<<d<<" "<<min(x,d-x)<<endl;
    }
}