#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str= "naseemmmmm";
    int count=0;
    char findchar= 'm'
    for(int i=0;i<str.size();i++){
        if(str[i]==findchar){
            count++;
        }
    }
    cout<<  "frequncey of character "<<count;
    
}
