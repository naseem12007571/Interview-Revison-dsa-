class Solution {
public:
    int addDigits(int num) {
      while(num>9){
      int ans=0,rem;
      while(num!=0){
       rem= num%10;    
       num=num/10;       
       ans=ans+rem;       
      }
      num= ans;
    }
    return num;
    }
};
// while(num!=0) pahle case mein niche gaya re nikala fir 63 not equl to 0 hota h
// rem= num%10;// reminder nikal liya  suppose 635%10 5 reminder fir rem 63%10 3r 6%10 rem 6 rem
// num=num/10; // number jo bacha usko divide 63/10  6  6/10 =0 
// ans=ans+rem; // 0+5=5  fir 5+3= 8 agya 5+3+6 14 fir num ki jahag 14 single digit meinn lana  h to first loop esliye num>9 se 
//or num= ans; se jo asn ke ander 14 aaya use fir se proces ke liye first loop lagya kiyo ki ans single digit men lana h  

https://www.youtube.com/watch?v=0j7879JOgIU
