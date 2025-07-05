#include<vector> 
using namespace std;
class Solution {
public:
    void backtrack(vector<int>& x, int start, int sum, vector<int>& candidates,
                   vector<vector<int>>& result, int target) {

        if (sum > target)
            return;
        if (sum == target) {
            result.push_back(x);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1])
                continue;
            x.push_back(candidates[i]);
            backtrack(x, i + 1, sum + candidates[i], candidates, result,
                      target);
            x.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> result;
        vector<int> x;
        backtrack(x, 0, 0, candidates, result, target);
        return result;
    }
};