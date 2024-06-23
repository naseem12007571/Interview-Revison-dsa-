#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> ans;
    int zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != zero) {
            ans.push_back(arr[i]);
        }
    }
    
    cout << "Non-zero elements: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}

// with function 
#include<bits/stdc++.h>
using namespace std;


void remove(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<arr[i];
        }
    }
}

int main() {
   int n;
   cout<<"Enter the number of n = ";
   cin>>n;
   
   int arr[100];
   cout<<"Enter the array element is = ";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   cout<<"nonzero element is = ";
    remove(arr,n);
   
}




