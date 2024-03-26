#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number is ";
    cin>>n;
    
    int sum=0;
    int num=n;
    int rem;
    
    while(num!=0){
        rem=num%10;
        num=num/10;
        sum=sum+rem*rem*rem;
    }
    if(sum==n){
        cout<<"number is amstrom";
    }else{
        cout<<"number is not amstrom";
    }
}
