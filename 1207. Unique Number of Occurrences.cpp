class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> fre;
        for(auto i:arr){
            fre[i]++;
        }
        unordered_set<int>s;
        for(auto i: fre)
        {
// set mein insert kardiya humne second mtbl firsr per value hoig second per frequc hogi 
// esliye hume fre check karna h 2 ya use jyda to nhi h set mein unique hi ata h esliye last mein compare kardiya set ke sath ager match ho elemt to true other false 
            s.insert(i.second);  
        }
        return fre.size()==s.size();

    }
};

// aise second liya example 
// value  fren
// 1       3
// 2       2
// 3       1
// value fist hoga fre second hoga esliye set mein use hi dala kiyo set unique value print karta h 

// https://www.youtube.com/watch?v=x8oL-BaeeGM&t=205s
