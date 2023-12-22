class Solution {
public:
    int lengthOfLastWord(string s) {
        
     int n=s.size();
     int count=0;
     
     for(int i=n-1;i>=0;i--){
        char ch=s[i];
        if(ch!=' '){
            count++;
        }
        else if(count!=0){
            break;
        }

     }
       return count;
    }
};




// Class "Solution" ka definition
class Solution {
public:
    // Function "lengthOfLastWord" ki declaration, jo ek string ki length mein se last word ki length ko nikalti hai
    int lengthOfLastWord(string s) {
        
        // String ki length ko store karne ke liye variable 'n'
        int n = s.size();
        
        // Variable 'count' ko initialize karna, jo last word ki length ko store karega
        int count = 0;
        
        // String ko reverse order mein traverse karna
        for (int i = n - 1; i >= 0; i--) {
            // Ek character ko 'ch' mein store karna
            char ch = s[i];
            
            // Agar character space nahi hai, to 'count' ko badhaye
            if (ch != ' ') {
                count++;
            }
            // Agar character space hai aur 'count' non-zero hai, to loop se bahar nikal jaye
            else if (count != 0) {
                break;
            }
        }
        
        // Last word ki length ko return karna
        return count;
    }
};
