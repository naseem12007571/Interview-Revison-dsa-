#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,m;
  
  cout<<"Enter the x number ";
  cin>>x;
  m=x;


  int sum=0,rem;
  while(x!=0){
      rem=x%10;
      x=x/10;
      sum=sum*10+rem;
  }
  if(sum==m){
      cout<<"this palindrom";
  }else{
      cout<<"this is not palindrom";
  }
  
}
