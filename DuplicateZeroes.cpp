class Solution {
public:
    
    vector<int> shiftbyone(vector<int>& arr,int pos){
        
        for(int i= arr.size()-1 ; i>pos; i--){
            arr[i]= arr[i-1];
        }
        return arr;
    }
    void duplicateZeros(vector<int>& arr) {
        
        for(int i=arr.size()-2; i>=0; i--){
            
            if(arr[i]==0){
                arr = shiftbyone(arr,i);
                arr[i+1] = 0;
            }
            
        }
    }
};