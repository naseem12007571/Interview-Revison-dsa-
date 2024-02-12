#include <bits/stdc++.h> 
vector<int> countVowelsConsonantsSpaces(string &s, int n) {
    // Write your code here.

    vector<int>ans;
       int vowel=0;
       int constt=0;
       int space=0;

       for(int i=0;i<n;i++){
           if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' || s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U' ){
               vowel++;
           }
           else if(s[i]==' '){
               space++;
           }
           else{
               constt++;
           }
       }

       ans.push_back(vowel);
       ans.push_back(constt);
       ans.push_back(space);
       return ans;
    
}
