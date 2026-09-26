#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(s[i]!=c){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }
        int ans = -1;
        for(int i = 1; i <= n; i++){
            bool valid = true;
            for(int j = i; j <= n; j += i){
                if(s[j-1]!=c){
                    valid = false;
                    break;
                }
            }
            if(valid){
                ans = i;
                break;
            }
        }
        if(ans != -1){
            cout<<1<<endl;
            cout<<ans<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
}