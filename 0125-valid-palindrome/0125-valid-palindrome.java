class Solution {
    public boolean isPalindrome(String s) {

        String newString = s.toLowerCase();
        String res = newString.replaceAll("[^a-z0-9]", "");

        // if(!(a >= 'A' && a <= 'Z') && !(a>='a' && a <= 'z') && !(a>='0' && a<='9')) 

        // for(char c : newString){

        //     if(c == 
        // }

        int left = 0;
        int right = res.length() -1;

        if(res.isBlank()){
            return true;
        }

        while(left<right){

            if(res.charAt(left)!=res.charAt(right)){
                return false;
                
            }
            
               left++;
                right--; 
            
        }
        return true;
    }
}