class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int count2;
        if (nums.back()==2){
            count2 = 1;
        }
        else count2 = 0 ;
        
        int count1 = 0;
        
        for (int i = 0 ; i<nums.size();){
            if (nums[i]==0){
                i++;
            }
            else if(nums[i]==1){
                if (count1==mpp[1] && count1 != 0){
                    i++;
                }
                else {
                    rotate(nums.begin()+i,nums.begin()+i+1,nums.end()-count2);
                    count1++;
                }
            }
            else if(nums[i]==2){
                if (count2==mpp[2] && count2 != 0 ){
                    i++;
                }
                else {
                    rotate(nums.begin()+i,nums.begin()+i+1,nums.end());
                    count2++;
                }
            }
            mpp[nums[i]]=i;
        }        
    }
};