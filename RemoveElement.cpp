class Solution {
    
void shiftbyone(vector<int>& nums, int pos) {
    
    for(int i = pos; i<nums.size()-1; i++){
        
        nums[i] = nums[i+1];
    }
}
public:
    int removeElement(vector<int>& nums, int val) {
        
        int occurences =0, size = nums.size();
        int changed =0, p =0;
        
         for(int i = 0; i<nums.size(); i++){
        
        if( nums[p] == val){
            
            occurences +=1;
            shiftbyone(nums, p);
            // changed = 1;
            
        }
             else{
                 p++;
             }
             // if(changed ==1){
             //     i = i-1;
             //     changed =0;
             // }
             
             }
        for(int j = size - occurences +1; j<size; j++)
            nums[j] = '_';
        return (size - occurences);
        // return nums;
    }
};