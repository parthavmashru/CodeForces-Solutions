#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;
    cin>>n>>k;
 
    int x=k-n+1;
 
    if(x<1 || x>n)
    {
        cout<<-1<<endl;
        return;
    }
 
    vector<vector<int>> a(n,vector<int>(n));
    int on=1;
 
    a[0][0]=on++;
 
    for(int i=1;i<x;i++)
    {
        a[0][i]=on++;
        a[i][0]=on++;
    }
 
    for(int i=x;i<n;i++)
    {
        a[i][i]=on++;
    }
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
                a[i][j]=on++;
        }
    }
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)
        solve();
}