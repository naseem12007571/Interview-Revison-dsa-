class Solution {
public:
    int missingNumber(vector<int>& nums) {                                           
       int n=nums.size();         // ager nums ki jagaha int nums hota hum int n =size    variable nhi lete                                        
       int totallsum= n*(n+1)/2;     // mtlb int n variable mein store nhi karte nicche gfg question dekh sakte h
       int sum=0;
       for(int i=0;i<n;i++){
           sum=sum+nums[i];
       } 
       return totallsum-sum;
    }
};

  // stiver bhiya sheet leetcode problem h
// aporch h pahle totall numer ka sum nikale lenge jaise n=9 h to 9*(9+1)/2 = 90/2=45;
//ab arrray ka sum nikal lenge   1+2+3+4+5+6+7+9= 37 fir total se - kardo 45-37 =8 missi



gfg missing number 
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
        int totall =n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum=sum+array[i];
        }
         return totall-sum;
    }
     
};
