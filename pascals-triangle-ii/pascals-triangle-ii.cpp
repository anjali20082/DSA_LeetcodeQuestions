class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> result;
        vector<int> previous;
        vector<int> next(rowIndex+1);
        
        if(rowIndex == 0)
            return {1};
        else if(rowIndex == 1)
            return {1,1};
        
        previous = {1,1};
        // else{
            
            for(int row = 2; row <= rowIndex; row++){
                next[0]=1;
                for(int i = 1; i<row; i++){
                next[i] = previous[i-1]+ previous[i];
                }
                next[row] = 1;
                previous = next;
                
            }
        // }
       return previous; 
    }
};