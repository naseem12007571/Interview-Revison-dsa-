class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        
        int ans=0;
        for(int i=2;i*i<=N;i++){
            while(N%i==0){
                ans=max(ans,i);
                N/=i;
            }
        }
        if(N>1)
        ans=N;
        return ans;
    }
};


//  https://www.youtube.com/watch?v=Toz0bgHJ360
