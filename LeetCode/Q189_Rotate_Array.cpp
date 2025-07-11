class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i =0;
        
        while(true){
                int current = (i)%nums.size();
                int next = (current + k)%nums.size();
                int it = 0;
            while(next != i){
                int store = 0;
                store = nums[(next)%nums.size()] ;
                nums[next % nums.size()] = nums[i];
                nums[i]= store;
                current = next ;
                next = current + k;
                it++;

            }
            if(it >= nums.size()-1) break;
            i++;

        }
        
        
    }
};