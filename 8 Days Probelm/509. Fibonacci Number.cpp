class Solution {
public:
    int fib(int n) {

        if(n==0|| n==1){  
            return n;  
        }

        int last =0;
        int previous =1;
        int current;

        for(int i=2;i<=n;i++){
            current=last+previous;
            last=previous;
            previous=current;
        }
        return previous;
        
    }
};

// n==0 or n==1 esliye return n kara h kiyo ki fabinoci number ka first and second number 0 1 hota h to use same return karo and fir loop 2 se start kara h
// and one thing more i<=n tk loop chilaega

// compilor code
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter the number of x: ";
    cin >> x;

    int last = 0, previous = 1, current;

    for (int i = 2; i <= x; i++) {
        current = last + previous;
        last = previous;
        previous = current;
    }

    cout << "Fibonacci number is: " << previous;

    return 0;
}
