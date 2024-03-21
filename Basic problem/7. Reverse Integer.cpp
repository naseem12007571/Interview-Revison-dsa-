class Solution {
public:
    int reverse(int x) {

      int ans=0;
      int rem;

      while(x!=0){
        rem= x%10;
        x=x/10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){

        }
            ans=ans*10+rem;
      }
    
        return ans;
    }
};

// compilor code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int num;
    cout<<"Enter the number ";
    cin>>num;
    
    int ans =0 ;
    int rem;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans*10+rem;
    }
  
    cout<<"Reverse Value is : "<< ans;
}
