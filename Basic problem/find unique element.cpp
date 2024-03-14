#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int arr[7]={6,9,8,9,11,11,6};
    for(int i=0;i<7;i++){
        n=n^arr[i];
    }
    cout<<n;
}
