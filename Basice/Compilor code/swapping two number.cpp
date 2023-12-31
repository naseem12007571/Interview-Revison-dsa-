#include<iostream>
using namespace std;
int main()
{
    //  int a=10,b=5,c;
    //  cout<<"before swapping ";
    //  cout<<"a= "<<a <<" "<<"b= "<<b<<endl;
    //  c=a;
    //  a=b;
    //  b=c;
    //  cout<<"after swapping ";
    //  cout<<"a= "<<a <<" "<<"b= "<<b<<endl;
    
    
    
    // without third variable;
    
    int a=20, b=10;
    cout<<"before swapping ";
    cout<<"a= "<<a<<" "<<"b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"after swapping ";
    cout<<"a= "<<a <<" "<<"b= "<<b<<endl;
}

// The output of this program is the same as the first program above.

// Let us see how this program works:

// Initially, a = 5 and b = 10.
// Then, we add a and b and store it in a with the code a = a + b. This means a = 5 + 10. So, a = 15 now.
// Then we use the code b = a - b. This means b = 15 - 10. So, b = 5 now.
// Again,we use the code a = a - b.This means a = 15 - 5. So finally,= 10

