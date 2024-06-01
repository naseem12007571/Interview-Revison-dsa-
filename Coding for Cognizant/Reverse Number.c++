#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    
    int reverse = 0, lastdigit;
    
    while(num != 0) {
        lastdigit = num % 10;
        reverse = reverse * 10 + lastdigit;
        num = num / 10;
    }
    
    cout << "Reversed number is " << reverse;
    return 0;
}


python code

n = int(input("Enter the number n: "))

reverse = 0

while n != 0:
    lastdigit = n % 10
    reverse = reverse * 10 + lastdigit
    n = n // 10  

print("Reversed number is", reverse)
