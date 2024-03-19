#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}

class Solution{
public:
    int search(string pat, string txt) {
        // code here
        vector<int>p(256,0);
        vector<int>tx(256,0);

        int patLength = pat.length(), txtLength = txt.length();

        for(int i = 0;i<patLength; i++)
        {
            p[pat[i]]++;
            tx[txt[i]]++;
        }

        int ans = 0;
        if(p == tx) ans++;

        int i = 0; int j = patLength;

        while(j < txtLength)
        {
            tx[txt[j]]++;
            tx[txt[i]]--;

            if(p == tx) ans++;
            i++;
            j++;
        }

        return ans;
    }

};