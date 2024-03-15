#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  int arr[6]={5,6,7,8,9,10};
     
    //  int start=0,end=5;
    //  while(start<end){
    //      swap(arr[start],arr[end]);
    //      start++;
    //      end--;
    //  }
    //  for(int i=0;i<6;i++){
    //      cout<<arr[i]<<" ";
    //  }
    
    
    // taka the input from the user 
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
}
