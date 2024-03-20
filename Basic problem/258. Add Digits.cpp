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

// compilor code here 
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
