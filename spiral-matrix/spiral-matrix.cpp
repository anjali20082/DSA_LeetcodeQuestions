class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int rowstart =0;
        int rowend = m-1;
        int colstart = 0; int colend = n -1;
        
        int total = m*n;
        int count =0;
        vector<int> ans;
        
        while(count<total){
            
            for(int i = colstart; count<total && i<=colend; i++){
                ans.push_back(matrix[rowstart][i]); count++;
            }
            rowstart++;
            for(int i = rowstart; count<total && i<=rowend; i++){
                 ans.push_back(matrix[i][colend]);count++;
            }
            colend--;
            for(int i =colend; count<total && i>=colstart; i--){
                 ans.push_back(matrix[rowend][i]);count++;
            }
            rowend--;
            for(int i = rowend; count<total && i>=rowstart; i--){
                 ans.push_back(matrix[i][colstart]);count++;
            }
            colstart++;
        }
        return ans;
    }
};