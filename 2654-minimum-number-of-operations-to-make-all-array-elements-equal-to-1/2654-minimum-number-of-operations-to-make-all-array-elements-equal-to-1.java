class Solution {

    public int gcd(int a, int b){

        while(b !=0){
            int temp = b;
            b = a%b;
            a= temp;
        }
        return a;

    }
    public int minOperations(int[] nums) {

        int n = nums.length;
        int cnt1 =0;
        int g=0;

        for(int i=0 ;i<n;i++){
            if (nums[i] == 1){
                cnt1++;
            }
            g = gcd(g, nums[i]);
        }
         if(cnt1 >0){
            return n-cnt1;
         }

         if (g>1){
            return  -1;
         }

        int minlen =n; 
       for(int i=0; i<n; i++){
        int curgcd =0;

        for(int j=i; j<n; j++){
            curgcd = gcd(curgcd, nums[j]);

            if (curgcd == 1){
                minlen = Math.min(minlen, j-i+1);
                break;

            }
        }
       }     

       return minlen+n-2;



        
    }
}