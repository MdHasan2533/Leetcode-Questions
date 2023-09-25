class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        for ( int row = 0; row < matrix.size() ; row++){
            for ( int col = 0; col < row; col++){
                swap(matrix[row][col], matrix[col][row]);
            }
        }

        int startingCol = 0;
        int endingCol = matrix[0].size()-1;
        while(startingCol < endingCol){
            for ( int row = 0; row <= matrix.size()-1; row++){
                swap(matrix[row][startingCol], matrix[row][endingCol]);
            }
            startingCol++;
            endingCol--;
        }
    }
};