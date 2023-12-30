#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Naseem choudhary ";
    int start=0;
    int end=s.size()-1;
    
    while(start<=end){
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<"revere string is "<<s<<endl;
    cout<<"size of string is "<<s.size();
    
}
