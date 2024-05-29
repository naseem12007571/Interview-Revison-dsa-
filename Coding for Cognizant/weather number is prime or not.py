// if number is  devide itself  and 1 that number are prime 
// 2 se le kar n-1 tk ander ki bich ki koi value ager n ko devide kar degi to wo prime number nhi h  
//  suppose n=10  10/ 2  2 se devide ho raha note a prime 
//  suppose n=7   7/7  7 divide itself and 1 se then its a prime 


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    if (n < 2) {
        cout << "number is not a prime" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            cout << "number is not a prime" << endl;
            return 0;
        }
    }

    cout << "number is prime" << endl;
    return 0;
}




pyhton code 
num = int(input("Enter the number: "))

if num < 2:
    print("Number is not prime")
else:
    for i in range(2, num):
        if num % i == 0:
            print("Number is not prime")
            break
    else:
        print("Number is prime")




