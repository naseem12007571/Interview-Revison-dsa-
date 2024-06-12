n=int(input("Enter the number"))
sum=0
for i in range(1,n+1):
    sum=sum+i
print("sum of natural number = ",sum)   # loop se bahar ankar print kara h ye yaad karna h 



c++
#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the number of n";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum of natural number "<<sum;
    
}
