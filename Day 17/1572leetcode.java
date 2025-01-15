//1572. Matrix Diagonal Sum

class Solution {
    public int diagonalSum(int[][] mat) {
        int n=mat.length;
        int ans=0;

        for(int i=0;i<n;i++){
            ans+=mat[i][i];
            ans+=mat[n-1-i][i];
        }
        if(n%2==0)
        return ans;
        return ans-mat[n/2][n/2];
    }
}

/*
return ans-mat[n/2][n/2];
 in odd its counted twice so its removed once as it is sum of all elements diagonally 

 

 */