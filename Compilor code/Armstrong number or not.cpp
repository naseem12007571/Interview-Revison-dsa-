
// Armstrong number means such as a number that if you take out a cube of
// all the digits and then add  them and same number will  come back 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    
    while(n>0){
        int lastDigit=n%10;
        // sum=sum+pow(lastDigit,3);
   sum=sum+lastDigit*lastDigit*lastDigit;
        n=n/10;
        
    }
    if(sum==originaln){
        cout<<"number is armstong ";
    }
    else{
        cout<<"number is not armstrong";
    }
        
}



