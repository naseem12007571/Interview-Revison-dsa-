#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of n ";
    cin>> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start =0, end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    
    cout<<"swap array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// without input with initilize element reverse 
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {3, 4, 5, 6, 7, 8};
    int n = 6;


    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

   
    cout << "Array after reversing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   
}
