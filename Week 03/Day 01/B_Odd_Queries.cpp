#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n, q, sum = 0;
        cin>> n >>q;
        ll a[n+1];
 
        for(ll i=1; i<=n; i++) cin>>a[i]; 
            
        ll prefix[n+1] = {0};
        prefix[1] = a[1];
        for(ll i = 2; i<=n; i++){
            prefix[i] = prefix[i-1]+a[i];
        }
        
        while (q--)
        {
            ll l, r, k;
            cin>> l >> r >>k;
            ll sum = ((prefix[n] - (prefix[r] - prefix[l-1])) + ((r-l+1)*k));
            if(sum %2 == 1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    
    return 0;
}