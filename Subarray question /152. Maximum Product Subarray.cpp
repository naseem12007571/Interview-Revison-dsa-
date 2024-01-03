class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int ans=INT_MIN; // maximum product dhune ke liye variable banaya ans ka jo maxi product dega mujhe ;
        int max_positiveprod=1;   // maxi product nikalega
        int min_negativeprod=1;  // mini product nikalega
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){  // 
                swap(max_positiveprod,min_negativeprod);
            }

            max_positiveprod=max_positiveprod*nums[i];  // ye product nikala mienee 
            // aise jo karta tha mein max=max*nums[i] yahi h miaxim mile jaygea

            min_negativeprod=min_negativeprod*nums[i];  // ye prodcuct  nikala 
            
            max_positiveprod=max(nums[i], max_positiveprod);// maxi prod nikala
            min_negativeprod=min(nums[i], min_negativeprod);// mini prod  niklna


            ans=max(max_positiveprod,ans);   // fir ans mein dal diya maxi prod nikalkar
            

        }
        return ans;
        
    }
};

// https://www.youtube.com/watch?v=tHNsZHXnYd4&t=190s
//  3 thing ho rahi h 
//  ans varibale liya maxi and mini prod ke liye variable liya 
// uske baad swap kara diya ager -1 value exist karti h nums[i] ke ander to
// maxpostive prod mein large data store karega
// mini mein small data store karega 
// humara nums suppos 2 3 -2 4
// for exma max =10 min=-10 
// ab jab mera maxipostive minus 2 se multi karega to mera maxipostive chota ho jayega 
// jasi max 10*-2= -20 aygea to mera maxi to chota ho gyaa uske baad ager mein mini ko mulit karu to -10*2= 20 sab se largest mini ke ander chala gaya to eska matlab hume mini ke ander se maxi ke ander lana hoga esliye meine maxpostiveprod ko mini ke sath swap kara h taki minue value se jo multi ho kar maxi banega wo maxipstive mein swap ho ja thast it 
