#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 0) {
            cout << n << "\n"; 
        } else {
            int reachable = 1;  
            if (k >= n - 1) {
                reachable = 1;  
            } else {
                reachable = n;  
            }
            cout << reachable << endl;
        }
    }
    return 0;
    // Accepted :) 
}
