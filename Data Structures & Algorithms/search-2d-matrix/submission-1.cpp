class Solution {
public:
    bool binSearch(vector<vector<int>>& mat, int tar, int st, int row, int end) {
        while(st <= end) {
            int colMid = st + (end - st) / 2;

            if(mat[row][colMid] == tar) {
                return true;
            }

            if(mat[row][colMid] < tar) {
                st = colMid + 1;
            } else {
                end = colMid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();

        int st = 0, end = m - 1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(mat[mid][0] <= tar && mat[mid][n-1] >= tar) {
                return binSearch(mat,tar,0,mid,n-1);
            }

            if(mat[mid][0] >= tar) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return false;
    }
};
