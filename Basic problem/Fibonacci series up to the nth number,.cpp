#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int last = 0, previous = 1, current;
    // cout << "Fibonacci series up to " << num << " terms: ";
    cout << last << " " << previous << " "; // Print the first two terms

    for (int i = 2; i < num; i++) {
        current = last + previous;
        cout << current << " ";
        last = previous;
        previous = current;
    }
    return 0;
}


//   Fibonacci Numbers
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter the number of x: ";
    cin >> x;

    int last = 0, previous = 1, current;

    for (int i = 2; i <= x; i++) {     // ye <= tk chailega number ke liye 
        current = last + previous;
        last = previous;
        previous = current;
    }

    cout << "Fibonacci number is: " << previous;

    return 0;
}
