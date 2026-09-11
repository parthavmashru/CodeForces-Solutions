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
        int n;cin>>n;vector<ll>a(n),x(n),y(n);
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>y[i];
        }
        for(int i = 0; i < n; i++){
            a[i]=y[i]-x[i];
        }
        sort(a.begin(),a.end());
        int i=0,j=n-1,cnt=0;
        while(i<j){
            if(a[i]+a[j]>=0){
                cnt++;
                i++;
                j--;
            }
            else i++;
        }
        cout<<cnt<<endl;
    }
}