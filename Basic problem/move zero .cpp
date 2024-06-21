#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of n ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
    }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
