class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int l = int(nums.size());
       
         vector<int> res;
        int freq[l+1];
        
       for (int i = 0; i < l; i++){
           freq[i] = 0;
       }
        
       for (int i = 0; i < l; i++) {
           freq[abs(nums[i])-1]++;
          
        }
         for (int i = 0; i < l; i++){
           // cout<<freq[i]<<" ";
             if(freq[i] == 0)
                 res.push_back(i+1);
       }
      
        return res;
    }
};