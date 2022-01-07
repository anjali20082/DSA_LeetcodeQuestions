class Solution {
    
    void shiftleftbyone(vector<int>& a, int pos){
        
        for(int i =pos+1; i<a.size(); i++){
            a[i-1] = a[i];
        }
        
    }
public:
    void moveZeroes(vector<int>& a) {
        
        int noofzeroes =0, k =0, j=0;
        int s = a.size();
        int b[s]   ;
        k = a.size()-1;
        if (a.size() <2)
            return;
     
        
        for(int i=0; i<a.size(); i++){
            
            if(a[i] !=0)
                a[j++] = a[i];
            else
                noofzeroes++;
        }
        for(int i=j; i<a.size();i++)
            a[i] = 0;
        // for(int i =0; i<a.size(); i++)
        //     a[i] = b[i];
//        for(int i = a.size(); i>=0; i--){
           
//            // if(a[i] !=0)
//            //     continue;
//           if (a[i]==0){
//                shiftleftbyone(a,i);
//               a[k] = 0;
//               k--;
//                noofzeroes +=1;
//            }
           
//        }
        
        // for(int i = a.size(); i>=a.size()-noofzeroes ; i--)
        //     a[i]=0;
    }
};