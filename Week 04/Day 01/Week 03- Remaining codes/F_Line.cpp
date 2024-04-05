
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> v(n); 
        ll see = 0; 

        for(ll i = 0; i < n; i++) {
            if(s[i] == 'L') {
                see += i;
                v[i] = (n - 1) - 2*i; 
            } else {
                see += n - (i + 1);
                v[i] = 2*i - (n - 1); 
            }
        }

        sort(v.begin(), v.end(), greater<ll>());

        for(ll i = 1; i <= n; i++) {
            if(i <= n && v[i-1] > 0) {
                see += v[i-1]; 
            }
            cout << see << " ";
        }
        cout << "\n";
    }
    return 0;
}
