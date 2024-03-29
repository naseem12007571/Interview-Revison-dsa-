#include<iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    
    if(n==0 && n<2){
        cout<<"not a prime number";
        return 0;
    }
    
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"not a prime";
                return 0;
            }
        }
         cout<<"number is prime ";
         return 0;
    }
}
