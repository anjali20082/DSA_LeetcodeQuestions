class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int s = flowerbed.size();
        int alternate = 0;
        
        for(int i =0; i<s;i++ ){
            
         if(flowerbed[i] == 0){    
            int prev = (i==0 || flowerbed[i-1] == 0) ? 0 : 1;
            int next = (i == s - 1 || flowerbed[i + 1] == 0) ? 0 : 1;
            
           if(prev == 0 && next ==0){
               
               flowerbed[i] = 1;
               alternate++;
               // n--;
           }
            
        }
        
        }
         return alternate >= n;
        //     return true;
        // else 
        //     return false;
    }  
       
    
};