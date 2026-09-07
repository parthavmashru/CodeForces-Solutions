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
        int n;cin>>n;vector<int>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
 
        int i=1,j=n;
        int mini=1,maxi=n;
 
        while(i<j)
        {
            if(v[i]==mini||v[i]==maxi)
            {
                if(v[i]==mini)mini++;
                else maxi--;
                i++;
            }
            else if(v[j]==mini||v[j]==maxi)
            {
                if(v[j]==mini)mini++;
                else maxi--;
                j--;
            }
            else break;
        }
 
        if(i>=j)cout<<-1<<endl;
        else cout<<i<<" "<<j<<endl;
    }
}