//74. Search a 2D Matrix


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

/* simple linear search 

for gods sake learn binary search pls, its expected to do binary in most but chalta hai*/