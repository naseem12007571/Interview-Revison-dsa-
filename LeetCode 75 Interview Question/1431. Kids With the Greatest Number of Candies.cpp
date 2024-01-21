class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi=INT_MIN;
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
       
            if(maxi<=candies[i]+extraCandies){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};
