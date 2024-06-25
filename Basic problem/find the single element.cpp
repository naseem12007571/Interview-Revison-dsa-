#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int singleElement = 0;
    for (int i = 0; i < n; i++) {
        singleElement ^= arr[i];
    }

     cout<<"only single element is "<<singleElement;
}

//Enter the number of elements: 5
//Enter the elements: 1 2 1 2 3 4
//only single element is 3

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int makezero =0;
        for(int i=0;i<nums.size();i++){
            makezero=makezero^nums[i];
        }
        
        return makezero;
    }
};
