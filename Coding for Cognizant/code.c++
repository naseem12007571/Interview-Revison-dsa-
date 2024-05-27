#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str= "naseemmmmm";
    int count=0;
    char findchar= 'm'
    for(int i=0;i<str.size();i++){
        if(str[i]==findchar){
            count++;
        }
    }
    cout<<  "frequncey of character "<<count;
    
}

//  each character frequency c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "nasseemmmmm";
    map<char, int> frequency;
   
    // Loop through each character in the string and count their frequency
    for(char i : str){
        frequency[i]++;
    }
   
    // Print the frequency of each character
    for(auto i : frequency){
        cout << "Frequency of char '" << i.first << "' is " << i.second << endl;
    }

}

/////  python 
strr = "naseemmmm"
stt = 'm'
count = 0
for i in strr:
    if i == stt:
        count += 1
print(count)


# count each character 
strr = "nasseeemmm"
count_dict = {}    # intialize empty dictionary

for i in strr:
    if i in count_dict:     # Check if the character 'i' is already a key in the 'count_dict'
        count_dict[i] += 1  # If the character is already in the dictionary, increment its count by 1
    else:
        count_dict[i] = 1    # If the character is not in the dictionary, add it as a key with a count of 1

print(count_dict)


















