class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
            
            for(int j = n-2; j>=0; j--){
                
                sum = sum + nums[j];
                
                j--;
                
            }
        return sum;
    }
};