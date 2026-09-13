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
        int n;cin>>n;vector<int> p(n),v,ind;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            if(p[i]!=i+1)
            {
                v.push_back(p[i]);
                ind.push_back(i+1);
            }
        }
        reverse(v.begin(),v.end());
        if(v==ind)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}