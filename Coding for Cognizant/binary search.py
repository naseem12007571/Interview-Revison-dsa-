#include<iostream>
using namespace std;

int search(int arr[],int size, int key){
    int start =0;
    int end=size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
    return -1;
}

int main()
{
    
    int arr[7]={12,13,14,15,16,17,18};
    int index=search(arr,7,17);
    cout<<"key index is "<<index;
    
    
    
}
