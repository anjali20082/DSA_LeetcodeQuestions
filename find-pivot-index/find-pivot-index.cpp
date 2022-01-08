class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int l = nums.size();
        int total =0;
        for(int i =0; i<l; i++){
            total+= nums[i];
        }
        int leftsum =0;
        for(int i =0; i<l ; i++){
            
            if(leftsum == total -leftsum-nums[i])
                return i;
             
            leftsum += nums[i];
        }
        return -1;
    }
};