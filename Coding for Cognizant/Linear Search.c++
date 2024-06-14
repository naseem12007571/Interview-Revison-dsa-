list= [12, 3, 4, 5, 67, 8]
def search(list, key):
    for i in range(len(list)):
        if list[i] == key:
            return i
    return -1
key = 5
index = search(list, key)
print("Index is", index)






#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
           
        }
    }
    return -1;
    
}
 int main()
 {
     
     int n;
     cout<<"Enter the size of n ";
     cin>>n;
     
     
     int arr[100];
     cout<<"Enter the element of array ";
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     
     int key;
     cout<<"Enter the key ";
     cin>>key;
     
     cout<<search(arr,n,key)<<endl;
     
     
 }
