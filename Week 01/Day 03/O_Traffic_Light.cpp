#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char start;
        cin >> n >> start;

        string s;
        cin >> s;
        s += s;         

        int cnt = 0, result = 0;
        if(start == 'g') {
            cout << 0 << endl;
            continue;
        }

        bool flag = false;
        for(int i=0; i<2*n; i++) {
           if(s[i] == 'g') { 
                result = max(result, cnt);
                flag = false;     
           } 

            if(s[i] == start && flag == false) {
                flag = true;
                cnt = 0;
            }

            if(flag == true) cnt++;
        }

        cout << result << endl;
    }
    
    return 0;
}