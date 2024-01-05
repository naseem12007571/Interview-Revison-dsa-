#include <bits/stdc++.h>
using namespace std;
int main()
{
    // create a map;
    unordered_map<string,int>m;
    
    // insertion insert map
    // like we can insert data pair form
    pair<string,int>p= make_pair("anees",5);
    m.insert(p);
    // second method to insert the data;
    pair<string,int> pair("raza",4);
    m.insert(pair);
    
    // third method to insert
    m["naseem"]=2;
    
    // search and find method all method 
    cout<<m["naseem"]<<endl; // ans 2
    cout<<m.at("anees")<<endl; // 5 ana chahiye
    
    //////size check
    cout<<"size is "<<m.size()<<endl;
    
    /// to check present or not anthing
    cout<<m.count("bro")<<endl; // key value nor present give 0
    cout<<m.count("raza")<<endl;  // this present so give 1;
    
    
    /// erase 
  m.erase("raza");//and ab size check kar sakte h pahle 4 eske baad 3hoga
  cout<<"size is now "<< m.size()<<endl;
  
  // how we cam etrate the through to loop
  
//   for(auto i:m){
//       cout<<i.first<<" "<< i.second;
//   }
  
  // or can use iterator 
  
  unordered_map<string,int> :: iterator it =m.begin();
  while(it!=m.end())  //jab tk apka eterator mape ke end tk nhi pahuch jata
  cout<<it->first<<" "<<it->second<<endl;
  it++;
    

    
}
