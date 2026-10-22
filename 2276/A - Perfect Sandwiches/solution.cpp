#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;cin>>t;
    while(t--)
    {
        ll a,b;cin>>a>>b;
        if(b>=a)cout<<-1<<endl;
        else cout<<min(b,a-b)<<endl;
    }
}