#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    char str[100]= "4PREP2INSTA6";
    int sum=0;
    for(int i=0;i<strlen(str);i++){
        // here check character h ya nhi character one hota h so 9tk check hoa=ga
        if((str[i]>='0') && (str[i]<='9')){
            sum=sum+(str[i] -'0');
        }
    }
    cout<<sum;
}
