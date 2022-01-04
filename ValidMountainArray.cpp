class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int peak =0, ascent =0, descent =0, duplicate =0;
        if(arr.size() <3)
            return false;
        
         
//         else if(arr.size()>=3) {
//             for(int i =0; i<arr.size()-1; i++ ){
                
//                 if(arr[i] == arr[i+1]){
//                     // duplicate =1;
//                     return false;
//                 }
//             }
//                 }
        
        else if (arr.size()>=3){
        // else{
           
             for(int i =0; i<arr.size()-1; i++ ){
                
                if(arr[i] == arr[i+1]){
                    duplicate =1;
                    break;
                }
             }
            
            for(int i =0; i<arr.size()-1; i++){
                
                if(arr[i] <arr[i+1])
                    continue;
                else {
                    peak =i;
                    break;
                }
                    
            }
                 
            
            for(int j =0; j<peak; j++){
                if(arr[j] < arr[j+1])
                    ascent =1;
                else 
                    ascent =0;
            }
            
             for(int j =peak+1; j<arr.size(); j++){
                if(arr[j] < arr[j-1])
                    descent =1;
                else {
                    descent =0;
                    break;}
            }
        
//              cout<<"peak = "<<peak;
//             cout<<"ascent = "<<ascent ;
           
//             cout<<"descent = "<<descent ;
                if(ascent ==1 && descent ==1 && duplicate ==0 && peak >0)
                    return true;
                
        }
        return false;
    }
};