#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, s, ssum=0;
    cin >> n >> s;

    vector<long long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        ssum += a[i];
    } 


    long long l=0, r=0, ans=1e18, sum =0;
    
    while (r < n) {
        sum += a[r];

        while (sum - a[l] >= s && l < r)
        {
            sum -= a[l];
            l++;
        }
        if(sum >= s) {
            ans = min(ans, r - l + 1);
        }
   
        r++;
    }
    (ans == 1e18) ? cout << -1 : cout << ans;

    return 0;
}