class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int totallsum= n*(n+1)/2;
       int sum=0;
       for(int i=0;i<n;i++){
           sum=sum+nums[i];
       } 
       return totallsum-sum;
    }
};


// aporch h pahle totall numer ka sum nikale lenge jaise n=9 h to 9*(9+1)/2 = 90/2=45;
//ab arrray ka sum nikal lenge   1+2+3+4+5+6+7+9= 37 fir total se - kardo 45-37 =8 missi
