#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            if(a==1)v.push_back(i);
        }
        if(v.size()<x)
        {
            cout<<-1<<endl;
            continue;
        }
        int mini=n;
        for(int i=0;i+x-1<v.size();i++)
        {
            int L=0,R=n-1;
            if(i>0)L=v[i-1]+1;
            if(i+x<v.size())R=v[i+x]-1;
            mini=min(mini,L+n-1-R);
        }
        cout<<mini<<endl;
    }
}