class Solution {
public:
    int fib(int n) {
         if(n==0||n==1){ // ager 0 and 1 exist karta to use retunr n hi karna h
            return n;
        }
        
        int last=0;
        int previous =1;
        int current;

        for(int i=2;i<=n;i++){
            current= last+previous;
            last=previous;
            previous=current;
        }
        return prevous;
    }
};


// compilor code
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter the Fibonacci Number ";
    cin>>num;
    int last = 0, previous = 1,current;
    
    
    // Here we are printing 0th and 1st terms
    cout << last << " " << previous << " ";
    
    
    // printing the rest of the terms here
    for(int i = 2; i < num; i++){
        current = last + previous;
        last = previous;
        previous = current;
        cout<<previous<< " ";
    }
    
}
