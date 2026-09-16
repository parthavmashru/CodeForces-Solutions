#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        int cnt=0;
 
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==2)cnt++;
        }
 
        if(cnt%2)
        {
            cout<<-1<<endl;
            continue;
        }
 
        if(cnt==0)
        {
            cout<<1<<endl;
            continue;
        }
 
        int x=cnt/2,c=0;
 
        for(int i=0;i<n;i++)
        {
            if(v[i]==2)c++;
            if(c==x)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}