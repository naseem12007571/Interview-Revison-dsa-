class Solution {
public:
    int strStr(string haystack, string needle) {

        // int n=haystack.size();
        // int m=needle.size();

        // if(n<m){
        //     return -1;
        // }
        
        // for(int i=0;i<n-m+1;i++){
        //     if(haystack.substr(i,m)==needle){
        //         return i;
        //     }
        // }
        // return -1;

// https://www.youtube.com/watch?v=v3zdhmdrasE&t=346s
        // second method

        return haystack.find(needle);
            
        
    }
};
