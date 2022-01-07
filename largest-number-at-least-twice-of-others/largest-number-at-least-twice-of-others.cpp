class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int largest = nums[0];
        int l = nums.size();
        int index =0;
        int flag = 0;
        
        if(l==1)
            return 0;
        
        for(int i =1; i<l ; i++){
            if(nums[i] > largest){
                largest = nums[i];
                index =i;
           }    
        }
        
         for(int i =0; i<l ; i++){
             // flag = 0;
             if(i == index)
                 continue;
             if(largest >= 2*nums[i])
                 flag =1;
             else
             { flag =0;
              break;
             }
         }
        if(flag == 1)
        return index;
        else
            return -1;
    }
};