class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
     int n=s.size();
     string ans="";

     // fist words flower per loop chialya h f se r tk
     for(int i=0;i<s[0].size();i++){  

     // yahan ek ek character store honge ch mein jo bhi  i mein ate jaynge 
    //pahle f yaga fir l fir o fir w fir aise sab r tk pura 0index mtlb purawordscheckhog
         char ch=s[0][i]; 
     

     // ye loop flow se mtbl 1 index  se chala 0 index per flower
         for(int j=1;j<n;j++){ 

    // j to sidha flow se flight tk ek words check kar raha h and i jo h mtlb flower ke next l next 0 element ko check karyga ke h ya na ye  
         
            if(ch!=s[j][i]) 
              return ans; // character same nhi h to ans khali string return
             
         }
         ans=ans+ch;  // character mile to ans mein daldo
     }
         
         return ans;  // ans return kardo fir;
    }
    
};

// https://www.youtube.com/watch?v=JbVb2Fb7YVA
