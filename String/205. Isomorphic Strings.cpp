class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = t.size();
        int n2 = s.size();
        
        if (n != n2) {    // ye size ke liye laga condition jaise foo 3 or bar bhi 3 h 
            return false;
        }

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Check if characters in both strings have consistent mapping
                if (s[i] == s[j] && t[i] != t[j])  {
                    return false;
                }
                if (s[i] != s[j] && t[i] == t[j]){
                    return false;
                }
            }
        }

        return true;
    }
};
