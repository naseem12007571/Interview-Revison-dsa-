#include <bits/stdc++.h>
using namespace std;

int main() {
   
   string name= " n a s e e m ";
   string without=" ";
   
   for(int i=0;i<name.length();i++){
       if(name[i]!= ' '){
           without+=name[i];
       }
   }
   cout<<  " without space is = "<<without;
}
