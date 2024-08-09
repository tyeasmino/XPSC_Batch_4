/* title: Week 13 - E_Getting_Zero.cpp */
/* created: 2024-08-08 10:39:42 */ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> ans(32770);

void find() {
    for (int i = 0; i < 32768; ++i) {
        int cnt = 0, x = i;
        while (x != 0) {
            x = (x * 2) % 32768;
            cnt++;
        }
        ans[i] = cnt;
    }

    for (int i = 32767; i >= 0; --i) {
        for (int j = 1; j <= 15; ++j) {
            ans[i] = min(ans[i], j + ans[(i + j) % 32768]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    find();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << ans[n] << " ";
    }
    cout << endl;

    return 0;
}