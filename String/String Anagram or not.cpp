class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        
        // if(a==b){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        
        
       if (a.size() != b.size()) {
            return false;
        }

        // Sort the characters in both strings
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Compare the sorted strings
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }

        // If the loop completes without returning, the strings are anagrams
        return true;
    }

};
