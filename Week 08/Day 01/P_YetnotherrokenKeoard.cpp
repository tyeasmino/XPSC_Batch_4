/* title: Week 7 - P_YetnotherrokenKeoard.cpp */
/* created: 2024-05-11 11:38:37 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll slength = s.size();
        vector<ll> capital, small;
        vector<bool> flag(slength + 1, true);

        for (ll i = 0; i < slength; i++) {
             if (s[i] == 'B') {
                if (!capital.empty()) {
                    flag[capital.back()] = false;
                    capital.pop_back();
                }
                flag[i] = false;
            }
            
            else if(s[i]=='b') { 
                if(!small.empty()) {
                    flag[small.back()] = false;
                    small.pop_back();
                }
                flag[i] = false;
            }

            else if (s[i] >= 'A' and s[i] <= 'Z') capital.push_back(i);
            else small.push_back(i);   
        }

        for (ll i = 0; i < slength; i++) {
            if (flag[i])
                cout << s[i];
        }
        cout << endl;

    }
    return 0;
}