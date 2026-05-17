class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int l = 0;
        int r = row*col-1;

        while(l<=r){
            int m = l+(r-l)/2;
            int Row = m/col, Col = m%col;
            if(target>matrix[Row][Col]){
                l = m+1;
            }else if(target> matrix[Row][Col]){
                l = m+1;
            }else if(target< matrix[Row][Col]){
                r = m-1;
            }else{
                return true;
            }
        }
    return false;
    }
};
