/* title: Week 4 - D_We_Need_the_Zero.cpp */
/* created: 2024-04-07 23:50:50 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, ans = 0;
        cin>>n;
        vector<ll> a(n);
        
        for(ll i=0; i<n; i++){
            cin>>a[i];
            ans ^= a[i];
        }
        
        if(ans == 0) cout<<0<<endl;
        else if(n%2 !=0) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}