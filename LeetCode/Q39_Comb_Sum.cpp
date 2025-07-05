
#include<vector> 
using namespace std;
class Solution {
public:
    void backtrack(vector<int>&x, int  i, int sum, vector<int>& candidates,vector<vector<int>>&result,int target){
        if (i >= candidates.size()) return;

        if(sum > target ) return;
        if(sum == target) {
            result.push_back(x);
            return;
        }
        
            x.push_back(candidates[i]);
            backtrack(x,i,sum+candidates[i],candidates,result,target);
        x.pop_back();
            
            backtrack(x,i+1,sum,candidates,result,target);
        



    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>x;
        backtrack(x,0,0,candidates,result,target);
        return result;
        
    }
};