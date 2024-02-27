#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the number of n ";
    cin>>n;
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    
        cout<<sum;
    
}


/// leetode add digit;
class Solution {
public:
    int addDigits(int num) {
       while(num>9){
        int sum=0;
        while(num!=0){
            sum=sum+num%10;
            num=num/10;
        }
       num=sum;
       }
       return num;
    }
};
