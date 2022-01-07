class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        
        int j =0, k=0;
        int s= a.size();
        int even[s];
        int odd[s];
        
        for(int i =0; i< a.size(); i++){
            
            if(a[i] %2 ==0)
                even[j++] = a[i];
                else
                    odd[k++] = a[i];
        }
        
        int p =0, q=0, r=0;
        
      
        while(p<j){
            // cout<<even[p]<<" ";
            a[r++] = even[p++];
            
           
        }
         // cout<<endl;
        while(q<k && r<s){
             // cout<<odd[q]<<" ";
            a[r++] = odd[q++];
           
        }
        return a;
    }
};