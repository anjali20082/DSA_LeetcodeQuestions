class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
       
         long long l = nums.size();
         long long flag = -1*(pow(2,33));
         long long firstmax = flag;
         long long secondmax =  flag;
        // int thirdmax = INT_MIN;
        long long thirdmax =  flag;
        if(l ==1)
            return nums[0];
        
        
        for(int i =0; i<l; i++){
             
            // firstmax = nums[i];
            if( nums[i] > firstmax ){
                thirdmax = secondmax;
                 secondmax = firstmax;
                firstmax = nums[i];
               
            }
            else if(nums[i]  > secondmax && nums[i]< firstmax){
                // flag=1;
                thirdmax = secondmax;
                secondmax = nums[i];
            }
            else if(nums[i]>thirdmax && nums[i]< secondmax){
                // flag=1;
                thirdmax = nums[i];
            }
        }
        cout<<firstmax<<" "<<secondmax<<" "<<thirdmax;
        if(l ==2 || thirdmax == flag )
            return firstmax;
        // else if()
        //     return firstmax;
        else
        return thirdmax;
    }
};