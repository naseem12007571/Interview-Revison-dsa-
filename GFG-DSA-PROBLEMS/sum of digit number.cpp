class Solution {
public:
    int reverse(int x) {
        int ans=0, rem;
       while(x!=0){
          rem=x%10;
           x=x/10;
           if(ans>INT_MAX/10){
               return 0;
           } 
           if (ans<INT_MIN/10){
             return 0;
           }
           ans=ans*10+rem;
       }
        
        return ans;
    }
};

        //  if(ans>INT_MAX/10){ this condition use for overflow ager number ye h       3456 or revere per ye 6543 banega to ye pahel se numbser jyda ho raha    32bit mein nhi aparaha to   lagai
        //        return 0;
        //    } 
        //    if (ans<INT_MIN/10){
        //      return 0;
