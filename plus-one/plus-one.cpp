class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry =1;
        vector <int> ans ;
        
        for(int i = digits.size()-1; i>=0; i--){
            
            if(digits[i] == 9 && carry ==1){
                ans.push_back(0);
            }
            
            if( digits[i]<9 && carry ==1){
                
                ans.push_back(digits[i] + 1);
                
                carry =0;
                continue;
            }
            if(carry ==0){ ans.push_back(digits[i]);}
            
        }
        if (carry!=0){
                ans.push_back(1);
            }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};