#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int max= INT_MIN;
    int  n;
    cout<<" size of array ";
    cin>>n;
    int arr[1000];
    
    cout<<" Enter the element of array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]> max){
            max= arr[i];
        }
    }
    
    cout<<" maxinum number is "<<max;
    
    
}
