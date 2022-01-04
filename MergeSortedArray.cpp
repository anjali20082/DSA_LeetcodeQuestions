class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
       
        int j=0, k=0, i=0;
        int temp[m+n];
       
        while(k<m && j<n){
            
            if(nums1[k]<= nums2[j] ){
                temp[i++] = nums1[k++];
                
            }else {
                 temp[i++] = nums2[j++];
                    
            }
        }
        while(k<m)
             temp[i++] = nums1[k++];
        while(j<n)
            temp[i++] = nums2[j++];
        
        for(int i=0; i<m+n; i++)
            nums1[i] = temp[i];
    }
    
};