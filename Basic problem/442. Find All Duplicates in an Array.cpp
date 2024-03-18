class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
          
            }
        }
        return ans;
    }
};

// compilor code 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Duplicate elements are: ";
    for (int i = 0; i < n - 1; i++) {   // it code give ouput when we give sorted asceding value like 11 12 13 14 14 
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}


//   it will give without sorting condition 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        for(int j=i+1;j<n;j++){
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                // break; // Break once a duplicate is found to avoid printing it multiple times
            }
        }
    }

    return 0;
}
