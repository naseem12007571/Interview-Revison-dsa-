// class Solution {
// public:
//     int countPrimes(int n) {
        // int count=0;
        
        // if(n==0 || n==1 || n==2){
        //     return 0;
        // }
        // for(int i=2;i<n;i++){
        //     for(int j=2;j<i;j++){
        //    if(i%j==0){
        //        count++;
        //        break;
        //    }
        // }
        // }
        // return n-count-2;

    class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;

                for(int j=2*i; j<n; j=j+i){
                    prime[j] = false;
                }
            }
        }

        return count;
    }
};
   
