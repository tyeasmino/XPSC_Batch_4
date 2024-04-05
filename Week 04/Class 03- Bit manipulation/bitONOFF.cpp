/* created: 2024-04-04 23:11:12 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check_kth_bit_on_or_off(int x, int k) {
    return (x >> k) & 1;
}

void print_on_bits(int x) {
    int cnt = 0;
    for(int k=0; k<=31; k++) {
        if(check_kth_bit_on_or_off(x, k)) {
            cnt++;
        }  
    }
    cout << cnt << "\n";
}

int turn_on_kth_bit(int x, int k) {
    return (x | (1 << k));
}

int turn_off_kth_bit(int x, int k) {
    return x & ~(1 << k);
}

int toggle_kth_bit(int x, int k) {
    return x ^ (1 << k);
}

int main()
{
    // cout << check_kth_bit_on_or_off(44, 3) << "\n";
    // cout << check_kth_bit_on_or_off(44, 4) << "\n";
    // print_on_bits(44);
    // cout << turn_on_kth_bit(44, 4);
    // cout << turn_off_kth_bit(44, 3);
    cout << toggle_kth_bit(44, 3);
    return 0;
}