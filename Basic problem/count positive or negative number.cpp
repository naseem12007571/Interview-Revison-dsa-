#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,3,-5,33,-2,233,-33,-32,2,33};
    int postCount=0;
    int negCount=0;
    
    for(int i=0;i<10;i++){
        if(arr[i]>=0){
            postCount++;
        }
        else{
            negCount++;
        }
    }
    
    cout<<"positive count is "<<postCount<<endl;
    cout<<"negative count is "<<negCount;
}
