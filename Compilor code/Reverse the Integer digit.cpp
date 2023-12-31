#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the x number ";
    cin>>x;
    
    int sum=0,rem;
    while(x!=0){
        rem=x%10;
        x=x/10;
        sum=sum*10+rem;
    }
    cout<<"sum is "<<sum;
}
