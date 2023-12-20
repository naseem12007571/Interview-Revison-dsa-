#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the arry of size ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    cout<<"Scond largest alement "<<arr[n-2];
    
}
