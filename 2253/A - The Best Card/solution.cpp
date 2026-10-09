#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    const int N = 200005;
    vector<bool> comp(N, false);
    comp[0] = comp[1] = true;
    for (int i = 2; (long long)i * i < N; i++)
        if (!comp[i])
            for (int j = i * i; j < N; j += i) comp[j] = true;
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (comp[n + 1] ? "NO" : "YES") << "
";
    }
    return 0;
}