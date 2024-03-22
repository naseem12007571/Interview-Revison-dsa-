class Solution {
public:
    int addDigits(int num) {
       while(num>9){
        int sum=0,rem;
        while(num!=0 || num>9){
            sum=sum+num%10;
            num=num/10;
        }
        num=sum;
        
        }
        return num;
    }
};

// compilor code here  it will give the result sum in single digit like 1 to 9 
#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    while (num > 9) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    
    cout << num;
    
    return 0;
}






// it will give the result in  2 or more number sum 
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
