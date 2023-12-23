vector<int> alternateNumbers(vector<int>&a) {

    // Write your code here.

    vector<int>positive;

    vector<int>negative;

    int n=a.size();

    for(int i=0;i<n;i++){

      if (a[i] > 0) 
        positive.push_back(a[i]);

      else 
        negative.push_back(a[i]); 
    }
    
    for(int i=0;i<n/2;i++){

       a[2 * i] = positive[i];
       a[2 * i + 1] = negative[i];
    }

    return a;

}



// ese hindi mein example ke sath samjhana for(int i = 0; i < n/2; i++) {
//         a[2 * i] = positive[i];
//         a[2 * i + 1] = negative[i];
//     }
// ChatGPT
// Bilkul, yeh code positive aur negative arrays ko alternately combine karke a array mein rakhne ke liye hai. Main isko ek udaharan ke saath samjha raha hoon:

// Maan lijiye n ki value 6 hai aur input vector a ye hai: {3, -1, 4, -2, 5, -6}.

// Positive Index aur Negative Index ki Shuruaat:

// positiveIndex aur negativeIndex dono 0 se shuru hoti hain.
// Pehla Iteration (i = 0):

// i ki value 0 hai, toh a[2 * 0] par positive number rakhna hai, jo ki positive[0] hai (3).
// Iske baad, a[2 * 0 + 1] par negative number rakhna hai, jo ki negative[0] hai (-1).
// Ab positiveIndex ko 2 ke saath badha diya jata hai (positiveIndex += 2;) aur negativeIndex ko bhi 2 ke saath badha diya jata hai (negativeIndex += 2;).
// Ab a array kuch is tarah dikhega: {3, -1, 0, 0, 0, 0}

// Dusra Iteration (i = 1):

// i ki value 1 hai, toh a[2 * 1] par positive number rakhna hai, jo ki positive[1] hai (4).
// Iske baad, a[2 * 1 + 1] par negative number rakhna hai, jo ki negative[1] hai (-2).
// Ab positiveIndex ko 2 ke saath badha diya jata hai (positiveIndex += 2;) aur negativeIndex ko bhi 2 ke saath badha diya jata hai (negativeIndex += 2;).
// Ab a array kuch is tarah dikhega: {3, -1, 4, -2, 0, 0}

// Yeh process aise hi chalti rahegi jab tak i ki value n/2 - 1 tak pahunchti hai. Iske baad, positive aur negative arrays ke saare elements a array mein set ho jaate hain, aur humein final result milta hai.

// Umeed hai ki yeh example aapko samajhne mein madad karega.


// vector<int> alternateNumbers(vector<int>& a) {
//     int n = a.size();

//     vector<int> result(n);

//     int positiveIndex = 0;
//     int negativeIndex = 1;

//     for (int i = 0; i < n; i++) {
//         if (a[i] > 0) {
//             result[positiveIndex] = a[i];
//             positiveIndex += 2;
//         } else {
//             result[negativeIndex] = a[i];
//             negativeIndex += 2;
//         }
//     }

//     return result;
// }
