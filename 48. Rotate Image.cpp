class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // vector<vector<int>> mat(matrix);
        // int row=matrix.size();
        // int cols=matrix[0].size();
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<cols;j++){
        //         matrix[i][j]=mat[cols-1-j][i];
        //     }
        // }

        // SECOND APPROACH
          // TRANSPOSE
        int n=matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
             swap(matrix[i][j],matrix[j][i]);
            
        }
           //  REVERSE EACH ROW
           for(int i=0;i<n;i++){
               int start=0,end=n-1;
               while(start<end){
                   swap(matrix[i][start],matrix[i][end]);
                   start++,end--;
               }
           }

        } 
};

// https://www.youtube.com/watch?v=ZtSkN2aoCko&list=PLQEaRBV9gAFvh2mVVhsph6OiemIHtp3r-&index=17
