#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the arry of size ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);    // pura array sort kardiya + number    yahn wo ye bala sort work nhi karega sort(arr.begin(),arr.end()) kiyo ki humare pss function bana hua nhi h
    cout<<"Scond largest alement "<<arr[n-2];
    
}

// gfg code senond largest element yahn per -1 retun kanra tha ager second largest nni mikla to esliye -1 liya INT_MIN nhi liya
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	     
	    int larg= -1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>larg)
	        larg=arr[i];
	    }
	    int secondlarg=-1;
	    for(int i=0;i<n;i++){
	    if(arr[i]!=larg)       //yahn per check kia h mera larg element large mein aachuka hoga toh arya ka koi elemt eaula nhi hona chaiye eske large 
	    secondlarg=max(secondlarg,arr[i]);    //yahn per jo mera arr bacha us mein us mera larg nikal de 
	}
	return secondlarg;
  }
};
// logic coder arrmy https://www.youtube.com/watch?v=567332frcF0&list=PLQEaRBV9gAFvh2mVVhsph6OiemIHtp3r-&index=6
