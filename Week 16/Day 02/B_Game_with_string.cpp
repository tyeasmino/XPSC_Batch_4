/* title: Week 16 - B_Game_with_string.cpp */
/* created: 2024-07-14 23:27:14 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    ll ans=0;
    stack<char> st;
    for(char c: s) {
        if(st.empty()) {
            st.push(c);  
        } 
        else if(st.top()==c) {
            ans++;
            st.pop();
        } else  {
            st.push(c);  
        } 
    }

    (ans % 2 == 1) ? cout << "Yes" : cout << "No";
    
    return 0;
}