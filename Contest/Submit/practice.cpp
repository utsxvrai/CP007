#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        string s;
        cin >> s;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int xor_0 = 0, xor_1 = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                xor_0 ^= a[i];
            } else {
                xor_1 ^= a[i];
            }
        }
        
        int q;
        cin >> q;
        
        while (q--) {
            int tp;
            cin >> tp;
            
            if (tp == 1) {
                int l, r;
                cin >> l >> r;
                
                l--; // Convert to 0-based index
                r--; // Convert to 0-based index
                
                for (int i = l; i <= r; i++) {
                    if (s[i] == '0') {
                        xor_0 ^= a[i];
                        xor_1 ^= a[i];
                        s[i] = '1';
                    } else {
                        xor_0 ^= a[i];
                        xor_1 ^= a[i];
                        s[i] = '0';
                    }
                }
            } else {
                int g;
                cin >> g;
                
                if (g == 0) {
                    cout << xor_0 << endl;
                } else {
                    cout << xor_1 << endl;
                }
            }
        }
    }
    
    return 0;
}
