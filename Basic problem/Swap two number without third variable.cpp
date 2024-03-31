#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a= 5, b= 10,c;
    
    // c= a;
    // a=b;
    // b=c;
    // cout<<" a = "<< a << " b= "<<b;
    
    // without third varibale 
    
    int a=5, b=10;
    
    a= a*b;  // 50  
    b= a/b;  // 50/10  =  b = 5 
    a= a/b; //  50/5    b update value 5 to 50/5 =  a= 10 
    
    cout<<" a ="<< a << " b= "<< b;
    
}
