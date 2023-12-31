#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cout<<"Enter the number of x ";
  cin>>x;
  
  int last=0,previous=1,current;
  
  for(int i=2;i<=x;i++){
      current=last+previous;
      last=previous;
      previous=current;
  }
  
  cout<<"fibonaci number is "<<previous;
  
 
  
}
