/* created: 2024-03-25 23:17:33 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;
        map<int, int> freq;

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int target = 0, ans = 0;
        for(auto f : freq) {
            target = max(target, f.second);
        }

        while (target < n) 
        {
            int need = n - target;
            ans = ans + 1 + min(need, target);
            target = target + min(need, target);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}