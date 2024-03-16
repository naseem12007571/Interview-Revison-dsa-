#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  name = "Naseem choudhary";
    
    int start =0,end= name.size()-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    cout<<name<<endl;
    
    
    // now check the size of string 
    
    int countsize=0;
    while(name[countsize]!='\0'){
        countsize++;
    }
    
    cout<<"size of string is = "<<countsize;
}


