#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    int arr[100];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<"duplicate element is "<<arr[i];
            
        }
    }
  
   
    
}

leetcode 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans=ans+nums[i];
                break;
            }
        }
        return ans;
    }
};
