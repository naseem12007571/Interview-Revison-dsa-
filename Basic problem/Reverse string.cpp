#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "naman";
    // string s;
    // cin>>s;
    string k = s; // make a copy of s
    
    reverse(k.begin(), k.end()); // reverse k
    
    if (k == s) {
        cout << "string is palindrome";
    } else {
        cout << "not a palindrome";
    }
    
    return 0;
}
