#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(vector<ll>v){
    int n = v.size();
    for (int i = 0; i <n-1; i++)
    {
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(int i = 0; i < n; i++)cin>>v[i];
        if(check(v)){
            cout<<0<<endl;
            continue;
        }
        if(v[n-2]>v[n-1]||v[n-1]<0){
            cout<<-1<<endl;
            continue;
        }
        cout<<n-2<<endl;
        for (int i = n-2; i>=1; i--)
        {
            cout<<i<<" "<<n-1<<" "<<n<<endl;
        }
    }
}