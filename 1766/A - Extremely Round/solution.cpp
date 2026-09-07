#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s=to_string(n);
cout<<9*(s.length()-1)+(s[0]-'0')<<endl;
}
}