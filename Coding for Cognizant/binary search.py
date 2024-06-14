# Define the list
arr = [12, 13, 15, 16, 18, 19, 20]

# Define the binary search function
def search(arr, key):
    start, end = 0, len(arr) - 1
    
    while start <= end:
        mid = start + (end - start) // 2
        
        # Check if key is present at mid
        if arr[mid] == key:
            return mid
        # If key is greater, ignore left half
        elif arr[mid] < key:
            start = mid + 1
        # If key is smaller, ignore right half
        else:
            end = mid - 1
    
    # Key is not present in the list
    return -1

# Example usage
key = 18
index = search(arr, key)
print("Index is", index)

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
