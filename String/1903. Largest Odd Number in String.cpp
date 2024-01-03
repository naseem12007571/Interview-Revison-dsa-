class Solution {
public:
    string largestOddNumber(string num) {
      
      int n=num.size();
      for(int i=n-1;i>=0;i--){
          if((num[i]-'0')%2!=0){    // nums[i]-'0' ye character ko integer mein karna h
              return num.substr(0,i+1); 
          }
      }

        return "";
    }
};


// https://www.youtube.com/watch?v=vkxUVdGgnhU
