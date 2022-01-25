class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int i =0;
        int res = n+1;
        int s = target;
        
        for(int j =0; j<n; j++){
            
            s -= nums[j];
            while(s<=0){
                
                res = min(res, j-i+1);
                s += nums[i++];
            }
            
            
        }
        return res % (n+1);
    }
};