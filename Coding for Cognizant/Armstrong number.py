// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    int sum = 0;
    int original = n;

    while (n != 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n /= 10;
    }

    if (original == sum) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}


pyhton 
n = int(input("Enter the number: "))
sum = 0
original = n

while n != 0:
    lastdigit = n % 10
    sum = sum + int(pow(lastdigit, 3))
    n //= 10 

if original == sum:
    print("The number is an Armstrong number.")
else:
    print("The number is not an Armstrong number.")








