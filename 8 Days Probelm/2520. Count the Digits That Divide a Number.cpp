class Solution {
public:
    int countDigits(int n) {
        int num=n;
        int count=0;
        int rem;
        while(num!=0){
            rem=num%10;
            if(n%rem==0) // jo mera digit nikal kar aya use num ko divide kar ke dekh rahe h
            count++;
            num=num/10;
        }
        return count;
    }
};
