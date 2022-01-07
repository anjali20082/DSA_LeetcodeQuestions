class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        
        int s = a.size();
        int j =s-1, i=0;
        vector<int> squ(s,0);
        int k=s-1;
        while(i<=j){
            
            if( abs(a[i]) > abs(a[j])){
                squ[k--] = a[i] * a[i];
                cout<<"i = "<<i<<" ";
                i++;
                
            }
            
            else
            {
                squ[k--] = a[j] * a[j];
                 cout<<"j = "<<j<<" ";
                j--;
            }
     
        }
        return squ;
    }
};