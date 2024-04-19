/* title: Week  - lower_bound.cpp */
/* created: 2024-04-18 22:23:06 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int> v = { 2, 3, 4, 4, 6, 9, 10 };
    auto it = lower_bound(v.begin(), v.end(), 11);

    if(it == v.end()) {
        cout << "Not Present\n";
    } 
    else {
        cout << "Present\n";
    } 

    cout << *it << " - " << it - v.begin() << "\n"; 
    return 0;
}