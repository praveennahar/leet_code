class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
         int row[n];// row array
         int col[m];// col array
        
        for(int i=0; i<n; i++){
            row[i] = 0;
        }
        for(int j=0; j<m; j++){
            col[j] = 0;
        }

    // Traverse the matrix:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    // mark ith index of row wih 1:
                    row[i] = true;

                    // mark jth index of col wih 1:
                    col[j] = true;
                }
            }
        }

        // Finally, mark all (i, j) as 0
        // if row[i] or col[j] is marked with 1.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    
    
};