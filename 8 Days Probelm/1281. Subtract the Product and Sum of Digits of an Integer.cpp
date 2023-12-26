class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int digit;
        int sum=0;
        int multi=1;
        while(n!=0){
            digit=n%10;
            multi=multi*digit;
            sum=sum+digit;
            n=n/10;
        }
        int answer= multi-sum;
        return answer;
    }
};
