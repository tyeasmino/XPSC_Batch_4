/* created: 2024-03-22 13:52:43 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    } 

    long long l=0, r=0, ans=0;    
    map<long long, int> ml;

    while (r < n) {        
        
        ml[a[r]]++;
        while(ml.size() > k) {
            ml[a[l]]--;
            if(ml[a[l]] == 0) {
                ml.erase(a[l]);
            }
            l++;
            
        }
        ans += (r - l + 1); 
        r++;
    }

    cout << ans;
    return 0;
}