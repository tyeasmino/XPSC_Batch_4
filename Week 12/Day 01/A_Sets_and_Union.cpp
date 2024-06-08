/* title: Week 12 - A_Sets_and_Union.cpp */
/* created: 2024-06-08 22:47:58 */
#include<bits/stdc++.h> 
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a[n], all; 
        for(int i=0; i<n; i++) {
            int k; 
            cin >> k;
            a[i].resize(k);
            for(int j=0; j<a[i].size(); j++) {
                cin >> a[i][j];
                all.push_back(a[i][j]);
            }
        }

        set<int> allset;
        for(auto i : all) allset.insert(i);

        int ans = 0;
        for(int i=1; i<51; i++) {
            vector<int> temp;
            for(int p=0; p<n; p++) {
                bool matched = false;
                for(int q=0; q<a[p].size(); q++) {
                    if(a[p][q] == i) {
                        matched = true;
                        break;
                    }
                }

                if(!matched) {
                    for(int q=0; q<a[p].size(); q++) {
                        temp.push_back(a[p][q]);
                    }
                }
            }

            set<int> tempset;
            for(auto i : temp) tempset.insert(i);

            if(tempset != allset) {
                ans = max(ans, (int)tempset.size());
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}