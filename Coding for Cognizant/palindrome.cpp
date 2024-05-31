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
        ans=ans*10+rem;
        copy=copy/10;
        
    }
    if(ans==n){
        cout<<"number is palindrome";
        return 0;
    }
    cout<<"number is not palindrome";

}

// python code 

num = int(input("Enter the number: "))
ans = 0
temp = num

while num > 0:
    dig = num % 10
    ans = ans * 10 + dig
    num = num // 10  # Use integer division

if temp == ans:
    print("The number is a palindrome")
else:
    print("The number is not a palindrome")





