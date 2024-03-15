#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};
    for(int i=0; i<s.length(); i++) {
        int index = s[i] - 97;
        freq[index]++;
    }

    bool flag = 0;
    for(int i=0; i<26; i++) {
        if(freq[i] == 0) {
            printf("%c", i+97, freq[i]); 
            flag = 1;
            break;    
        }
    }

    if(flag == 0) cout << "None";
    return 0;
}