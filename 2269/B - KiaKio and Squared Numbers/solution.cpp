#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
// Calculates the sum of the squares of the digits
int sum_square_digits(int x) {
    int sum = 0;
    while (x > 0) {
        int d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}
 
void solve() {
    int n;
    cin >> n;
    
    map<int, long long> frequency_map;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        int current = a;
        // K=100 guarantees that all numbers have entered their terminal cycle
        // and synchronizes their temporal phase relative to Night 0.
        for (int step = 0; step < 100; step++) {
            current = sum_square_digits(current);
        }
        
        frequency_map[current]++;
    }
    
    long long in_tune_pairs = 0;
    for (auto const& [value, count] : frequency_map) {
        if (count > 1) {
            in_tune_pairs += (count * (count - 1)) / 2;
        }
    }
    
    cout << in_tune_pairs << "
";
}
 
int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}