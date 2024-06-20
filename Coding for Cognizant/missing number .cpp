#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number n size: ";
    cin >> n;

  

    int sum = 0;
    int arr[100];

    cout << "Enter array numbers: ";
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the first n natural numbers
    int totalsum = (n * (n + 1)) / 2;

    for(int i = 1; i < n; i++) {
        sum += arr[i];
    }
    

    int result = totalsum - sum;
    cout << "The missing number is: " << result << endl;

    return 0;
}
