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



//// with function how can i do it 
#include <bits/stdc++.h>
using namespace std;

void movezero(int arr[], int n, int i=0) {
    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of n : ";
    cin>>n;
    
    cout<<"Enter the array element ";
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}

