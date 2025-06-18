 int cursum = 0; int maxx = 0;
        for ( int i = 0 ; i< nums.size(); i++){
            cursum += nums[i];
            if (cursum < 0){
                cursum = 0 ;
            }
            if (cursum > maxx){
                maxx = cursum;
            }
        }
        return maxx;

        