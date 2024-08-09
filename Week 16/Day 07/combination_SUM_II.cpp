// problem link:
// https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        fillCombinations(ans, {}, candidates, target, 0);
        return ans;
    }

    void fillCombinations(vector<vector<int>> &ans, vector<int> current, vector<int> &candidates, int target, int pos) {
        if(target == 0) {
            ans.push_back(current);
            return;
        }
        if(target < 0) return;

        for(int i=pos; i<candidates.size() && target>=candidates[i]; i++) {
            if(i==pos || candidates[i] != candidates[i-1]) {
                current.push_back(candidates[i]);
                
                fillCombinations(ans, current, candidates, target-candidates[i], i+1);
                current.pop_back();            
            }
        }
    }
};