#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
bool check(ll x)
{
    string s=to_string(x);
    string t=s;
    reverse(t.begin(),t.end());
    return s==t;
}
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        bool flag=false;
        if(n>=99)
        {
            ll r=n%12;
            ll a;if(r<=9) a=r;
            else if(r==10) a=22;
            else a=11;
            cout<<a<<" "<<n-a<<endl;
        }
        else
        {
            for(ll a=0;a<=n;a++)
            {
                if(check(a) && (n-a)%12==0)
                {
                    cout<<a<<" "<<n-a<<endl;
                    flag=true;
                    break;
                }
            }
            if(!flag) cout<<-1<<endl;
        }
    }
}