#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int num;
    int max=INT_MIN;
    int min= INT_MAX;
    cout<<"Enter the size of array ";
    cin>>num;
    
    cout<<"Enter the value of array ";
    int arr[1000];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
     
     for(int i=0;i<num;i++){
         if(arr[i]>max){
             max= arr[i];
         }
     }
  
     for(int i=0;i<num;i++){
         if(arr[i]<min){
             min= arr[i];
         }
     }
     
     cout<<" max value is "<<max<<endl;
     cout<<" min value is "<<min;
    
}
