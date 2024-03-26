/* created: 2024-03-26 01:23:18 */
#include<bits/stdc++.h>
using namespace std;

int kalindrome(vector<int> &v) {
    int s=0, e=v.size()-1;
    int palindrome = 1;
    while (s < e)
    {
        if(v[s] != v[e]) {
            palindrome = 0;
            break;
        }
        s++;
        e--;
    }

    return palindrome;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;

        vector<int> ar(n);
        for(int i=0; i<n; i++) cin >> ar[i];

        bool palindrome = 1;
        int s=0, e=n-1, a, b;
        while (s < e)
        {
            if(ar[s] != ar[e]) {
                palindrome = 0;
                a = ar[s];
                b = ar[e];
                break;
            }
            s++;
            e--;
        }

        if(palindrome == 1) cout << "YES\n";
        else {
            vector<int> withouts, withoute;
            for(int i=0; i<n; i++) {
                if(ar[i] == a) continue;
                else withouts.push_back(ar[i]);
            }
            int answers = kalindrome(withouts);

            for(int i=0; i<n; i++) {
                if(ar[i] == b) continue;
                else withoute.push_back(ar[i]);
            }
            int answere = kalindrome(withoute);

            if(answers == 1 || answere == 1) cout << "YES\n";
            else cout << "NO\n";
        }         
    }    
    return 0;
}