#include<vector>
using namespace std;

class Solution {
public:
    void backtrack(int index, vector<int>& x, int len,vector<int>& nums,vector<vector<int>>& result){
        if(index >= len){
            result.push_back(x);
            return;

        }
        x.push_back(nums[index]);
        backtrack(index+1,x,len,nums,result);
        x.pop_back();
        backtrack(index+1,x,len,nums,result);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>x ;
        vector<vector<int>> result; 
        backtrack(0,x,nums.size(),nums,result);
        return result;;
          
    }
};