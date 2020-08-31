/*
04. 二维数组中的查找
在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
示例:
现有矩阵 matrix 如下：

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
*/
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        for( int i = 0; i < n; i++) {
            for( int j = 0; j < m; j++) {
                if (matrix[i][j] == target) return true;
                if (matrix[i][j] > target) break;
            }
        }
        return false;
    }
};