/* created: 2024-03-24 02:05:43 */
#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;

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

        int cnt = 0;
        for(auto i : freq) {
            cnt += i.second - 1;
        }

        int result = n - cnt;

        if(cnt % 2 == 1) result--;
        cout << result << endl; 
    }
    
    return 0;
}