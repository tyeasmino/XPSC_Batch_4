#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int s = n.length();
    if(s == 4) cout << n;
    if(s == 3) cout<< "0" <<n;
    if(s == 2) cout << "00" <<n;
    if(s == 1) cout << "000" << n;    
    return 0;
}