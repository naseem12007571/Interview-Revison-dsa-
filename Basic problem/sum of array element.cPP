#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter the size of array ";
    cin>>n;
    
    cout<<"Enter the element of sum ";
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    cout<<"sum of array is "<<sum;
    
}
