#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}

vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) {
    long long l=0, r=0;
    vector<long long> result; 
    queue<long long> q;
    
    while(r<n) {
        if(a[r] < 0) q.push(a[r]);
         
        if((r-l+1) == k) {
            if(!q.empty()) result.push_back(q.front());
            else result.push_back(0);
            
            if(!q.empty() && a[l] < 0) q.pop();
            l++; 
        } 
        r++;
    }
    return result;
}