#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the n number ";
    cin>>n; 
    
    int rem,ans=0;
    int copy= n;
    
    while(copy!=0){
        rem=copy%10;
        copy=copy/10;
        ans=ans*10+rem;
    }
    if(ans==n){
        cout<<"number is palindrom";
        return 0;
    }
    cout<<"number is not palindrom";

}
