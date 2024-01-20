class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenated strings are equal or not, if not return ""
        if(str1 + str2 != str2 + str1)
            return "";
        // If strings are equal than return the substring from 0 to gcd of size(str1),   size(str2)
        return str1.substr(0, gcd(str1.size(), str2.size()));
    }
};

// Suppose str1 = "ABCABC" and str2 = "ABC"
// str1 + str2 = ABCABCABC
// str2 + str1 = ABCABCABC
// str1 + str2 == str2 + str1
// return str.substr(0, gcd(size(str1), gcd(size(str2))))
// where gcd(3, 6) = 3
// So, answer is "ABC"

// Also str1 = "LEET", str2 = "CODE"
// str1 + str2 = "LEETCODE"
// str2 + str1 = "CODELEET"
// So, return ""
