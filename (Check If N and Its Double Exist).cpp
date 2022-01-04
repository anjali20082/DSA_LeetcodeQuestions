class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        // int j=0;
        
        for(int i=0; i<arr.size()-1; i++){
            
            for(int j =i+1; j<arr.size(); j++){
                
                if (arr[j] == 2*arr[i] )
                    return true;
                else if(arr[i] %2 == 0 && arr[j] == arr[i]/2)
                    return true;
            }
            
            
        }
        return false;
        
    }
};