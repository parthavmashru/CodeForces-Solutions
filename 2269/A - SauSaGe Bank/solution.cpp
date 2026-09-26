#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while (t--) {
    ll n,k;
    cin>>n>>k;
    ll ans = (1LL<<(n-k+1))+2*(k-1);
    cout << ans <<endl;
    }
}