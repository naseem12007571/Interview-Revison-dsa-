#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    char c;
    cin>>c;
    if(c=='a'|| c=='e'|| c=='i'|| c=='o' || c=='u'|| c=='A'|| c=='E'||c=='I'|| c=='O'|| c=='U' ){
        cout<<"is a vowels";
    }
    else if((c>='a' && c<='z') && (c>='A' && c<='Z')){
        cout<<"invalid";
    }else{
        cout<<"consonant";
    }
    
}
