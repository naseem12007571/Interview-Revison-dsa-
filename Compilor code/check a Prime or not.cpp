#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n<2){
        cout<<"not a prime number ";
        return false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"not a prime number ";
                return false;
            }
        }
            cout<<"is a prime number ";
        
    }
}
