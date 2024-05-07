/* title: Week 7 - B_Binary_Parity.cpp */
/* created: 2024-05-07 21:19:03 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check_kth_bit_on_or_off(int x, int k) {
    return (x >> k) & 1;
}

ll print_on_bits(int x) {
    int cnt = 0;
    for(int k=0; k<=31; k++) {
        if(check_kth_bit_on_or_off(x, k)) {
            cnt++;
        }  
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; 
    cin >> t;

    while (t--)
    {
        ll x; cin >> x;
        bool flag = print_on_bits(x) % 2;
        (flag) ? cout << "ODD\n" : cout << "EVEN\n";
    }
    
    // cout << check_kth_bit_on_or_off(44, 3) << "\n";
    return 0;
}