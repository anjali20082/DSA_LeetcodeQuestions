class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int startIndex =-1;
        int p = haystack.length();
        int q = needle.length();
        int count =0;
        
        if(q==0 || haystack == needle)
            return 0;
        
      
        
        for(int i =0; i<haystack.length(); i++){
            
            count =0;
           
                if(haystack[i] == needle[0]){
                    
                    for(int j =0; j<needle.length();){
                        
                        if(haystack[i+j] == needle[j]){
                            
                             count +=1;
                                // i++;
                                j++;
                        }
                        else 
                            break;
                    }
                    
                   if(count == needle.length())
                    return i;
                }
        }
          
            return -1;
    }
};