class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        
        int j =0, greatestonright = a[1];
        int s = a.size();
        for( int i =0; i<a.size()-1; i++){
            
            j = i+1;
            greatestonright = a[j+1];
            
            while(j< a.size()){
                if(a[j]>greatestonright){
                greatestonright = a[j];
                }
                else
                    j++;
                
            }
            a[i] = greatestonright;
        }
        a[s-1] = -1;
        return a;
    }
};