#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(3);
        for(int i = 0; i < 3; i++)cin>>v[i];
        cout<<n-*min_element(v.begin(),v.end())<<endl;
    }
}