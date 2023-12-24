class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int ans=0;
        int num=x;   // yahan ek tricki poit h num mein x ko lenege niche ja kar 
        int rem;    // jab loop chailega to to num ko zero tk chailega ager x
                    // rakhte while lop mein to x zero hojata fir ans ke sath 
        while(num!=0){   // x ko campre karte to 0 se campre kanre per 0 yega 
            rem=num%10;
            num=num/10;
            if(ans>INT_MAX/10){
                return 0;
            }
            ans=ans*10+rem;
        };

        if(ans==x){
            return true;
        }
         return false;
    }
};

// esliye num =x liya h while mein dal kar num zero tk chalega fir baad me campre karte time x zero nhi hoga kiyo num zero hoga ans mein revese number achuka h x===
// x=121 ans revere ho kar 121 agya ans == x h true and false 
