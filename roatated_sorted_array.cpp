class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int count = 0;
        for (int i = 0 ; i<length; i++ ){
            for(int j =i+1 ; j < length ; j++){
                if (nums[j]==nums[i]){
                    int store = nums[j];
                    count++;
                
                    nums.erase(nums.begin() + j);
                    j--;
                    nums[length-1] =  store;
                }
            }

        }
        return length - count;
        
    }
};