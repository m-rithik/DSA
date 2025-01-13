//240. Search a 2D Matrix II

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         for (int i = 0; i < matrix.size();i++) {     
        for (int j = 0; j < matrix[0].size();j++) {  
            if (matrix[i][j] == target) {
                return true; 
            }
        }
    }
    return false;
    }
};

/*
litreally same code
please learn binary search, divide and con*/