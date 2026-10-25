#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>a(n);
        for(int i = 0; i < n; i++) cin>>a[i];
        ll sum = 0;bool ok = false;
        set<ll> s;
        s.insert(0);
        for(int i = 0; i < n; i++)
        {
            if(i%2==0)sum+=a[i];
            else sum-=a[i];
            if(s.find(sum)!=s.end())
            {
                ok = true;break;
            }
            s.insert(sum);
        }
 
        cout<<(ok?"YES":"NO")<<endl;
    }
}