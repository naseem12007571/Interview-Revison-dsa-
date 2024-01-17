#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    unordered_set<int> s;
    s.insert(10);
    s.insert(18);
    s.insert(11);
    s.insert(17);
    s.insert(17);  // duppicate not allow so it wont print
    for(auto  it =s.begin(); it!=s.end();it++)
        cout<<(*it)<<" "<<endl;
        
        cout<<"size is "<<s.size()<<endl;
        // s.clear();
        // cout<<"now size is " <<s.size();
        
        // improtant function find use for key is present or not 
        
        int key= 10;
        if(s.find(key) !=s.end()){  //!= means end tk loop chaila 
            cout<<"key is present "<<endl;
        }
        else{
            cout<<"key is not present "<<endl;
        }
        
        if(s.count(11)){
            cout<<"count is present true 1 "<<endl;
        }else{
            cout<<"count not present false"<<endl;
        }
    
}
