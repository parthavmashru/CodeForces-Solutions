#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int a,b,c;cin>>a>>b>>c;
if(b==a&&c==a)cout<<"Yes"<<endl;
else if(b+c<=a-2)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
  }
}