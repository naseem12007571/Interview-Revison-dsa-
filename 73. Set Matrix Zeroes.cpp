class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> mat(matrix);
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {   //ager 0 ke equal mtlb zero h to niche ek loop chaila kar col tk sare col ko zero kardiya and fir niche ek loop l se chaila kar row ko zero kardiya  question yahi h na ager h col ya row ka koi element 0 milta h to uske sare col and row ko zero kardo i,j koi bhi 0 ke equal h to niche loop laga kar col karna to col tk loop chaila liya h row karna h zero to ek loop l se row tk chaila kar zero kardoya h
                    for (int k = 0; k < cols; k++) {
                        // makes all the elements of row 'i' a '0'
                        matrix[i][k] = 0;
                    }

                    for (int l = 0; l < rows; l++) {
                        // making all the columns of column 'j' a '0'
                        matrix[l][j] = 0; 
                    }
                }
            }
        }
    }
};

