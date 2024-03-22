class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) { // Check if the number is negative
            return false;
        }

        int n = x;
        int rem;
        int ans = 0;

        while(n != 0){
            rem = n % 10;
            n = n / 10;

            if (ans > INT_MAX/10){
                return 0;
            }
            ans = ans * 10 + rem;
        }

        return ans == x;
    }
};


// compilor code

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int copy = num;
    int rem;
    int ans = 0; // Initialize ans to 0

    while (copy != 0) {
        rem = copy % 10;
        copy = copy / 10;
        ans = ans * 10 + rem;
    }

    if (ans == num) {
        cout << "Number is Palindrome";
    } else {
        cout << "Not a Palindrome";
    }

    return 0;
}
