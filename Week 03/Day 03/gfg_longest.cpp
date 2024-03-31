class Solution{
  public:
    int longestKSubstr(string s, int k) {
    map<char, int> mp;
    
    
    int l=0, r=0, ans=0, n = s.size(), cnt=0;
    while(r < n){
        while(r < n){
            if(mp[s[r]] == 0) cnt++;
            mp[s[r]]++;
            
            if(cnt > k) break;
            r++;
        }
    
        
        if(cnt >= k) ans = max(ans, r-l);
        if(r == n) break;
        
        while(l < n) {
            if(mp[s[l]] == 1) cnt--;
            mp[s[l]]--;
            
            if(cnt==k) break;
            l++;
        }
        l++;
        r++;
    }
    if(ans == 0) return -1;
    return ans;
    }
};