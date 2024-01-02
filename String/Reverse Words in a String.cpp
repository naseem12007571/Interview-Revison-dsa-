class Solution {
public:
    string reverseWords(string s) {

        int n=s.size();
        int i=0,j=n-1;
        string ans =""; //ans string liya h words add karange;
        string temp ="" ;// es string mein  hum words nikalange and esko revers kar ke ans ke 
                        // ander dal denge j loop se piche se words nikalange 
        
        while(s[i]==' ') {  // jab tk leading space i++ karo
          i++;
        }  
        while(s[j]==' '){   // yahan bhi piche se leading  mile raha j-- karo
            j--;
        }
        while(i<=j){        // jab tk loop chaila na h i mera chota ya euql na ho j ke
            
        while(i<=j && s[j]!=' ')  // i se j tk jaise eske upper tk loop chailega && s[j]not equal to ' ' ager meri s string ' ' not equal yani space nhi h word h to temp ke ander daldo
           {
                  temp=temp+s[j];  // temp ke ander words mila uper dal diya
                  j--;

           }
           reverse(temp.begin(),temp.end()); //jo temp mein word aya usko revers kar ke 
          ans=ans+temp+' ';                  //ans string ke ander daldo and ek space
          temp="" ;// temp empty kardo next word ke liye            // +dalo last mein
          while(i<=j && s[j]==' '){ // ager do space milta use hat jaeyga
              j--;
          }
          
        }

        ans.pop_back();
        return ans;
        
    }
};

//https://www.youtube.com/watch?v=wBxrhWq4L-E&t=322s
