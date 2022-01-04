class Solution {
    
//     void shiftbyone(vector<int>& n, int pos){
//         for(int i=pos; i<n.size()-1; i++){
//             n[i]=n[i+1];
            
//         }
//     }
    
     void shiftbyx(vector<int>& n, int pos, int times){
        for(int i=pos; i<n.size()-1; i++){
            n[i]=n[i+ times];
            
        }
    }
    
public:
    int removeDuplicates(vector<int>& nums) {
        
        int p =0, changes =0, times =0;
        int size = nums.size();
        if(size ==0)
            return 0;
        
         // if(nums[0] == nums[size-1])
         //        return 1; 
        int i=0;
        for(int j =1; j<nums.size(); j++){
            
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
                
            }
            
//            if(nums[p] == nums[p+1]){
               
//                times++;
//                p++;
//            }
//             else{
//                 shiftbyx(nums, p-times, times);
                
//                 changes++;
//                 // p++;
//                 times =0;
//             }
            
//              if(nums[p]==nums[p-1]){
//                 shift(nums, p);
//                 changes++;
//             }
//             else{
//                 p++;
//             }
        // }
        return (i+1) ;
    }
};