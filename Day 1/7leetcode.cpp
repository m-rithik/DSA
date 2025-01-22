// 7. REVERSE INTEGER 
// Given a 32-bit signed integer, reverse digits of an integer.


class Solution {
public:
    int reverse(int x) {
        if (x >= INT_MAX||x<=INT_MIN ) {
                return 0;  
            }
        int num =abs(x),rev=0,rem;
        while (num != 0) {
            rem = num % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
                return 0;  
            }
            rev = rev * 10 + rem;
            num /= 10;
        }
        if(x<0){
            return -rev;
        }else{
            return rev;
        }
    
            
    }
};

/*
Used if to know if given x falls under valid int
took abs of x and reversed it using while loop and used if statement if the reverse of the given x auses the value to go outside the signed 32-bit integer range
simple if else to return the right sign bit*/