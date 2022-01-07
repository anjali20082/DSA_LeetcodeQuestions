class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int s = heights.size();
        int count =0;
        
        vector<int> exp(s,0);
        
        for(int i =0; i<s; i++)
            exp[i] = heights[i];
        
       sort(exp.begin(), exp.end());
        
        for(int i =0; i<s; i++){
            
            if(heights[i] != exp[i])
                count++;
        }
        return count;
        
    }
};