//50. Pow(x, n)

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if(n<0){
            if (n == INT_MIN) {
                
                return 1 / (myPow(x, INT_MAX) * x);
            }
            return double(1/myPow(x,-n));
        }
        if(n%2==0)
            return myPow(x*x,n/2);
        return x*myPow(x,n-1);
    
            

    
    }
};

/*
used recursive for this, if n==INT_MIN its chnaged to int max for n<0 rest all math and recursive */