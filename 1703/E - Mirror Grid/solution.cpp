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
        int n;cin>>n;vector<string> v(n);
        for(int i = 0; i < n; i++)cin>>v[i];
        int ans=0;
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < (n+1)/2; j++){
                int cnt0=0,cnt1=0;
                int a[4] = {v[i][j],v[n-1-i][n-j-1],v[j][n-i-1],v[n-j-1][i]};
                for(int k=0;k<4;k++){
                    if(a[k]=='0') cnt0++;
                    else cnt1++;
                }
                ans+=min(cnt0,cnt1);
            }
        }
        cout<<ans<<endl;
    }
}