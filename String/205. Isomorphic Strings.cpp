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

// second method 
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sLastPos(256, -1);
        vector<int> tLastPos(256, -1);

        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (sLastPos[s[i]] != tLastPos[t[i]]) {
                return false;
            }

            sLastPos[s[i]] = i;
            tLastPos[t[i]] = i;
        }

        return true;
    }
};

