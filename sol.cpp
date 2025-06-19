class Solution {


    // private:
   
      bool ischeck( int n ){
   
         int temp  = n;
         bool check = true;
   
   
   
         while(n>0){
             int p = n%10;
         if (p == 0 || temp % p != 0) {
       check = false;
       break;
   }
   
                n = n/10;
         }
   
   
      return check;
      }
   
   
   
   
   
   
   public:
       vector<int> selfDividingNumbers(int left, int right) {
             // using the  brute force solution.
   
   
             vector<int> ans;
   
   
             for(int i  =  left; i<=right; i++){
               if(ischeck(i)){
                   ans.push_back(i);
               }
             }
   
         
         return ans;
   
       }
   };