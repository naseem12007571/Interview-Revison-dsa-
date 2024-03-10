class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
      unordered_set<int>set(nums1.begin(),nums1.end());
      unordered_set<int>set2(nums2.begin(),nums2.end());
      vector<int>ans;
      for(auto i: set){
          if(set2.count(i)){
          ans.push_back(i);

         }
      }

    return ans;

    }
};
